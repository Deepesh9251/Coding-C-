#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

//Q In this question we have to find that maximum sum of element in all possible hourglass in a 2D matrix.

//Q An hourglass is defined as:
//Q hourglass is defined for matrix of order m*n where m>=3 and n>=3.
//Q it is I shaped
//Q { 
//Q    *, *, *,
//Q    o, *, o,
//Q    *, *, *,
//Q }
//Q these star elements make one hourglass in the matrix. there can be one or more hourglass in a matrix

//  We use row wise prefix sum to solve this problem. 

//+ we can also use row column both but we have to do lot of calculations and there will be more if else conditions to find the sum of hourglass elements. that methood is not difficult but it is just too much time consuming.

void prefixSum(vector<vector<int>>& arr){
    for(int i = 0; i < arr.size(); i++){                    //# row wise prefix sum
        for(int j = 1; j < arr[0].size(); j++){
            arr[i][j] += arr[i][j-1];
        }
    }
    return;
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3, 4},   //10
        {8, 6, 7, 8},   //29
        {3, 7, 1, 4},   //15
        {4, 9, 0, 6},   //19
        {1, 0, 0, 6}    //7
    };

    int row = arr.size();
    int col = arr[0].size();
    
    prefixSum(arr);
    int hourglassSum = INT_MIN;
    int maxHourglassSum = INT_MIN;
    int x, y;

    for(int i = 2; i < row; i++){
        for(int j = 2; j < col; j++){
            if(j > 2){
                hourglassSum = arr[i][j] + arr[i-2][j] - arr[i][j-3] - arr[i-2][j-3] + arr[i-1][j-1] - arr[1][j-2];
            } 
            else if(j == 2){
                hourglassSum = arr[i][j] + arr[i-2][j] + arr[i-1][j-1] - arr[i-1][j-2];
            }
            if(maxHourglassSum < hourglassSum){
                maxHourglassSum = hourglassSum;
                x = i;
                y = j;
            }
        }
    }
    cout<<"max sum = "<<maxHourglassSum<<" "<<x<<" "<<y<<endl;
    
    return 0;
}