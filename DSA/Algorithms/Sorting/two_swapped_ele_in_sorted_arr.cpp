#include<iostream>
using namespace std;

//Q. The input array is sorted but only two elements are swapped. we have to swap them again to make the array sorted again.

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void swapTwoUnsortedElements(int arr[], int size){

    //* My Logic: consider sequence of 3 elements
    // int firstElementIdx = 0;
    // int secondElementIdx = -1;
    // for(int i = 1; i < size-1; i++){
    //     if(!firstElementIdx && arr[i-1] < arr[i] && arr[i] > arr[i+1]) firstElementIdx = i;
    //     if(arr[i] < arr[i-1] && arr[i] < arr[i+1]) secondElementIdx = i;
    // }
    // if(arr[0] > arr[1]) firstElementIdx = 0;
    // if(arr[size-1] < arr[size-2]) secondElementIdx = size-1;

    //* Better Logic: consider sequence of 2 elements
    int firstElementIdx = -1;
    int secondElementIdx = size-1;
    for(int i = 1; i < size; i++){
        if(arr[i-1] > arr[i]){
            if(firstElementIdx == -1) firstElementIdx = i-1;
            secondElementIdx = i;   
        }
    }
    swap(&arr[firstElementIdx], &arr[secondElementIdx]);
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,0};
    int size = sizeof(arr) / sizeof(int);

    swapTwoUnsortedElements(arr, size);

    printArray(arr, size);
    
    return 0;
}