#include<iostream>
#include<limits.h>
using namespace std;

//+ int maxElement(int arr[], int size, int idx = 0, int max = INT_MIN){
//+     if(idx == size){
//+         return max;
//+     }
//+     if(arr[idx] > max){
//+         max = arr[idx];
//+     }
//+     return maxElement(arr, size, ++idx, max);
//+ }

int maxElement(int arr[], int size, int idx = 0){
    if(idx == size - 1){
        return arr[idx];
    }

    //+ if(arr[idx] > maxElement(arr, size, idx+1)){
    //+     return arr[idx];
    //+ } else{
    //+     return maxElement(arr, size, idx+1);
    //+ }

    return max(arr[idx], maxElement(arr, size, idx+1));
}

int main(){
    int arr[] = {3,24,42,3,4,2,4,2,22,421,4};
    int size = sizeof(arr)/sizeof(int);

    cout<<maxElement(arr, size)<<endl;
    
    return 0;
}