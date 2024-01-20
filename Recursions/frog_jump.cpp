#include<iostream>
using namespace std;



int leastCostFrogJump(int n, int arr[], int idx = 0){  //# using 'n' as base case and solving this problem with the help of 'n'
    if(n == 2){
        return abs(arr[idx] - arr[idx + 1]);
    }
    if(n == 1){
        return 0;
    }

    int c1 = (abs(arr[idx] - arr[idx + 1]) + leastCostFrogJump(n - 1, arr, idx + 1));
    int c2 = (abs(arr[idx] - arr[idx + 2]) + leastCostFrogJump(n - 2, arr, idx + 2));

    return min(c1, c2);
}

//+ int leastCostFrogJump(int n, int arr[], int idx = 0){  //# using 'idx' as base case and solving this problem with the help of 'idx'
//+     if(idx == n - 2){
//+         return abs(arr[idx] - arr[idx + 1]);
//+     }
//+     if(idx == n - 1){
//+         return 0;
//+     }

//+     int c1 = (abs(arr[idx] - arr[idx + 1]) + leastCostFrogJump(n, arr, idx + 1));
//+     int c2 = (abs(arr[idx] - arr[idx + 2]) + leastCostFrogJump(n, arr, idx + 2));

//+     return min(c1, c2);
//+ }

int main(){
    int n = 5;
    // cin>>n;
    int arr[n] = {30, 80, 75, 70, 70};
    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }
    cout<<leastCostFrogJump(n, arr);
    return 0;
}