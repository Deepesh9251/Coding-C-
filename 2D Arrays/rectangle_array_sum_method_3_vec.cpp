#include <iostream>
#include <vector>

using namespace std;

// In this method we are forming prefix sum array both row wise and column wise. then use some mathematics to find the answer.
// for more distributed and categorised functions. Check method 2.
// I will use vectors instead of arrays

int rectArraySum(vector<vector<int>> arr, int r1, int c1, int r2, int c2)
{

    int row = arr.size();
    int col = arr[0].size();
    int sum = 0;

    for (int i = 0; i < row; i++)
    { // # Row-wise prefix sum
        for (int j = 1; j < col; j++)
        {
            arr[i][j] += arr[i][j - 1];
        }
    }
    for (int i = 1; i < row; i++)
    { // # Column-wise prefix sum
        for (int j = 0; j < col; j++)
        {
            arr[i][j] += arr[i - 1][j];
        }
    }

    //* Doing some mathematics
    
    int top_sum = 0, left_sum = 0, top_left_sum = 0;
    if (r1 != 0) top_sum = arr[r1 - 1][c2];
    if (c1 != 0) left_sum = arr[r2][c1 - 1];
    if (c1 != 0 && c2 != 0) top_left_sum = arr[r1 - 1][c1 - 1];
    
    sum = arr[r2][c2] - top_sum - left_sum + top_left_sum;

    return sum;
}

int main()
{

    vector<vector<int>> arr(0, vector<int>(0));

    //+ vector<vector<int>> arr;
    //+ vector<vector<int>> arr(0, vector<int>());
    //+ vector<vector<int>> arr(m, vector<int>(n));   (to get m*n vectro)

    arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {3, 7, 1, 4},
        {4, 9, 0, 6},
        {1, 0, 0, 6}};

    int row = arr.size();        //- int row = sizeof(arr)/sizeof(arr[0]);
    int col = arr[0].size();

    int r1, c1, r2, c2;
    cout << "Enter r1, c1 : ";
    cin >> r1 >> c1;
    cout << "Enter r2, c2 : ";
    cin >> r2 >> c2;

    int sum;
    sum = rectArraySum(arr, r1, c1, r2, c2);
    cout << "Sum = " << sum;

    return 0;
}