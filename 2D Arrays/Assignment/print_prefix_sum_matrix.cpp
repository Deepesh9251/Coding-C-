#include<iostream>
using namespace std;

int main(){

    int arr[][4] = {
        1, 2, 3, 4,   //10
        8, 6, 7, 8,   //29
        3, 7, 1, 4,   //15
        4, 9, 0, 6,   //19
        1, 0, 0, 6    //7
    };

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    
    for(int i = 0; i < row; i++){
        for(int j = 1; j < col; j++){
            arr[i][j] += arr[i][j-1]; 
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}