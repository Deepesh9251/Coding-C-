#include<iostream>
using namespace std;

//Q. The array should be sorted, rotated by some number of time, and all elements are unique.

int minEle(int arr[], int size){
    if(arr[0] <= arr[size-1]) return arr[0];
    int low = 0; 
    int high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] > arr[mid + 1]) return arr[mid + 1];
        if(arr[mid] < arr[mid - 1]) return arr[mid];

        if(arr[low] > arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    
    return -1;
}

int main(){
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);
    cout<<minEle(arr, size);
    return 0;
}