#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int arr[5][5] = {
        {0, 0, 0, 0, 0},
        {6, 3, 6, 7, 9},
        {2, 1, 1, 2, 2},
        {9, 8, 4, 3, 7},
        {7, 9, 1, 5, 5}
    };

    int n = sizeof(arr) / sizeof(arr[5]);

    for(int i = 0; i < n/2; i++){               // for number of cycles or number of rings

        for(int j = i; j < n - 1 - i; j++){         // for each cycle rotation

            swap(&arr[i][j], &arr[n-1-j][i]);          // swapping top-most row and left-most column
            swap(&arr[n-1-j][i], &arr[n-1-i][n-1-j]);  // swapping left most column and bottom most row
            swap(&arr[j][n-1-i], &arr[n-1-i][n-1-j]);  // swapping bottom most row and right most column

        //*Another approach of swapping with less number of operations
            //# These lines have correct logic but it is rotating the matrix in opposite direction. so use above code or the second approach. 

            //x int temp = arr[i][j];
            //x arr[i][j] = arr[j][n-1-i];
            //x arr[j][n-1-i] = arr[n-1-i][n-1-j];
            //x arr[n-1-i][n-1-j] = arr[n-1-j][i];
            //x arr[n-1-j][i] = temp;

        }
    }



/*

    //* Transpose of the matrix

    // {
    //     int i = 0;
    //     while (i < n)
    //     {
    //         int j = i + 1;
    //         while (j < n)
    //         {
    //             swap(&arr[i][j], &arr[j][i]);
    //             j++;
    //         }
    //         i++;
    //     }
    // }

    //* Swapping the first and last columns, second and second last columns, and so on

    // for(int i = 0, j = n - 1; i < j; i++, j--){
    //     for(int k = 0; k < n; k++){
    //         swap(&arr[k][i], &arr[k][j]);
    //     }
    // }

*/



    //Printing the matrix

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}