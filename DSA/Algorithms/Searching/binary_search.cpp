#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int low = 0; 
    int high = size-1;
    while(low <= high){
        //! int mid = (high + low)/2; causes integer overflow when high & low --> INT_MAX
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid+1;
        else if(arr[mid] > target) high = mid-1;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,8,9,10,11,12,13,14};
    int size = sizeof(arr) / sizeof(int);
    int target = 111;

    cout<<binarySearch(arr, size, target);
    return 0;
}