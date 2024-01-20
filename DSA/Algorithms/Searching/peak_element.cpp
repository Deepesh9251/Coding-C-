#include<iostream>
using namespace std;

//Q. Mountain array, All elements distinct, size greater than 3. return index of peak elements.

int peakElementIdx(int* arr, int size){
    int low = 0; 
    int high = size - 1;
    int mid;
    if(size < 3) return -1;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) return mid;
        if(arr[mid] < arr[mid + 1]) low = mid + 1;
        else if(arr[mid] < arr[mid - 1]) high = mid - 1;
    }
}

int main(){
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    cout<<peakElementIdx(arr,size);
    
    return 0;
}