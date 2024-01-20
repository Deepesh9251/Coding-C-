#include <iostream>
using namespace std;

// Find out the sum of elements in the rectangle formed by (r1, c1) and (r2, c2)

int rectArraySum(int* arr, int row, int col, int r1, int c1, int r2, int c2){
    int sum = 0; 
    for(int i = r1; i <= r2; i++){
        for(int j = c1; j <= c2; j++){
            sum += *(arr + i*col + j);
        }
    }
    return sum;
}

int main()
{
    int arr[][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        3, 7, 1, 4,
        4, 9, 0, 6,   
        1, 0, 0, 6
    };

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);

    int r1, c1, r2, c2;
    cout<<"Enter r1, c1 : ";
    cin>>r1>>c1;
    cout<<"Enter r2, c2 : ";
    cin>>r2>>c2;
    
    

    int sum = rectArraySum((int*)arr, row, col, r1, c1, r2, c2);
    cout<<sum;
    return 0;
}