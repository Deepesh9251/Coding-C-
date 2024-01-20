#include<iostream>
using namespace std;

// rotated sorted array, return presence of target, duplicate elements are present; apply binary search

int searchRotatedSorted(int* arr, int size, int target){
    int low = 0;
    int high = size - 1;
    if(arr[high] == target || arr[low] == target) return max(high, low);
    while(arr[low] == arr[high]){
        low++;
        high--;
    }
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        if(arr[mid] >= arr[low]){
            if(target < arr[mid] && target >= arr[low]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(target > arr[mid] && target <= arr[high]){
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
    int arr[] = {0,0,0,0,0,1,1,1,2,3,3,3,4,4,4,4,4,4,4};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" : "<<searchRotatedSorted(arr, size, arr[i])<<endl;
    }

    return 0;
}
