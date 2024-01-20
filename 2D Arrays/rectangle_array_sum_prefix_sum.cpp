#include<iostream>
using namespace std;

// Find out the sum of elements in the rectangle formed by (r1, c1) and (r2, c2)
// This method is based on prefix sum array concept. We will be going row-wise to make prefix sum array. 
// We can also go column-wise to calculate prefix sum. that will be similar to this method.
// We can also go both column wise and row wise both at the same time, then the formulae will be different. this method is implemented in another file.



void print2DArray(int* arr, int row, int col){            //* Printing the matrix

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<*(arr + i*col + j)<<" "; 
        }cout<<endl;
    }
    return;
}



void prefixSumArray(int* arr, int row, int col){         //* converting the original matrix into prefix sum matrix row-wise

    for(int i = 0; i < row; i++){
        for(int j = 1; j < col; j++){
            *(arr + i*col + j) += *(arr + i*col + j-1);
        }
    }
    return;
}

int rectArraySum(int* arr, int row, int col, int r1, int c1, int r2, int c2){     //* calculating the sum of the rectangle elements 

    cout<<"Inside rectArraySum function and before prefix sum array"<<endl;
    prefixSumArray(arr, row, col);    // converting into prefix sum matrix

    cout<<endl<<"Now printing after prefix sum array"<<endl;
    print2DArray(arr, row, col);     // printing the converted matrix for better understanding

    int sum = 0;
    if(c1 == 0){                               // if initial row is zero (c1-1) will give index out of bound error or unexpected output
        for(int i = r1; i <= r2; i++){
            sum += *(arr + i*col + c2);        // here *(arr + i*col + c1 - 1) will be considered as zero
        }
        return sum;
    }
    for(int i = r1; i <= r2; i++){
        sum += *(arr + i*col + c2) - *(arr + i*col + c1-1);           //# sum += arr[i][c2] - arr[i][c1-1];
    }

    return sum;
}





int main(){
    int arr[][4] = {
        1, 2, 3, 4,   //10
        5, 6, 7, 8,   //26
        3, 7, 1, 4,   //15
        4, 9, 0, 6,   //19
        1, 0, 0, 6    //7
    };

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);

    int r1, c1, r2, c2;
    cout<<"Enter r1, c1 : ";
    cin>>r1>>c1;
    cout<<"Enter r2, c2 : ";
    cin>>r2>>c2;

    int sum = rectArraySum((int*)arr, row, col, r1, c1, r2, c2);
    cout<<"Sum = "<<sum;
    
    return 0;
}