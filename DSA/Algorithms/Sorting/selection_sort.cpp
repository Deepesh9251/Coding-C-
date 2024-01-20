#include<iostream>
#include<limits.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return;
}


void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int idx = i;
        for(int j = i; j < size; j++){
            if(arr[j] < arr[idx]){
                idx = j;
            }
        }
        swap(&arr[i], &arr[idx]);
    }
    return;
}

int main(){
    int arr[] = {9,7,5,3,2,1,0};
    int size = sizeof(arr) / sizeof(int);

    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}