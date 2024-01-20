#include<iostream>
using namespace std;

//Q find the maximum sum row number

int main(){

    int arr[][4] = {
        1, 2, 3, 4,   //10
        8, 6, 7, 8,   //26
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
    int max_row = 0;
    int max = arr[0][col-1];
    for(int i = 1; i < row; i++){
        if(arr[i][col-1] > max){
            max = arr[i][col-1];
            max_row = i;
        }
    }

    cout<<"Max sum is "<<max<<" and the row index is "<<max_row<<endl;
    return 0;
}