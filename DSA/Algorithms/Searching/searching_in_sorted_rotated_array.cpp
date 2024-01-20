#include<iostream>
using namespace std;

//Q. rotated sorted array, distinct elements, return index of target, if not present return -1;


//_ METHOD 1: 
//* We will find and divide about min element index and then apply binary search in two parts accordingly, as both parts will be sorted individually.

//_ METHOD 2:
//* in another file : searching_in_sorted_rotated.cpp in this folder


int minEleIdxSortedRotated(int* arr, int size){
    if(arr[0] <= arr[size-1]) return 0;
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] < arr[mid - 1]) return mid;
        if(arr[mid] > arr[mid + 1]) return mid + 1;
        if(arr[mid] < arr[low]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
}

int binarySearch(int arr[], int si, int li, int target){
    int low = si;
    int high = li;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int searchInSortedRotated(int arr[], int size, int target){
    int minIdx = minEleIdxSortedRotated(arr,size); //* min element of the rotated sorted array, as this idx will divide the array such that two parts will be sorted.
    if(arr[size-1] >= target){ //* search in sorted part
        return binarySearch(arr, minIdx, size-1, target);
    }
    else{ //* search in rotated part
        return binarySearch(arr, 0, minIdx - 1, target);
    }
}

int main(){
    int arr[] = {9,10,6,7,8};
    int size = sizeof(arr) / sizeof(int);
    int target = 8;
    cout<<searchInSortedRotated(arr, size, target);
    
    return 0;
}