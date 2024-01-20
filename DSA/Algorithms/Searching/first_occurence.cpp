#include<iostream>
using namespace std;

//Q. The given array is sorted, we have to find the first occurence index of the target element. if not present then -1.

int search(int* arr, int size, int target){
    int idx = -1;
    int low = 0;
    int high = size - 1;
    while(high >= low){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            high = mid - 1;
            idx = mid;
        }
        else if(arr[mid] >= target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return idx;
}

int main(){
    int arr[] = {0,0,0,1,2,7,7,9,9,9,9};
    int size = sizeof(arr) / sizeof(int);
    int target = 10;

    cout<<search(arr, size, target);

    return 0;
}