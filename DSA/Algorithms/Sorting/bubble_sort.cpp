#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void bubbleSort(int arr[], int size){
    for(int no_of_passes = 0; no_of_passes < size - 1; no_of_passes++){
        for(int j = 0; j < size - no_of_passes - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            } 
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main(){
    int arr[] = {10,9,8,7,6};
    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}