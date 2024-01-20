#include<iostream>
using namespace std;

//Q. rotated sorted array, distinct elements, return index of target, if not present return -1;

int searchRotatedSorted(int* arr, int size, int target){
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        if(arr[mid] >= arr[low]){
            if(arr[mid] > target && target >= arr[low]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid] < target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < 12; i++){
        cout<<i<<" : "<<searchRotatedSorted(arr, size, i)<<" "<<endl;
    }
    
    return 0;
}