#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a; 
    *a = *b;
    *b = temp;
    return;
}

void insertionSort(int arr[], int size){
    int current;
    for(int i = 1; i < size; i++){
        current = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > current){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = current;
    }
    return;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return;
}

int main(){
    int arr[] = {9,8,7,6,6,7,8,5,5,4,3};
    int size = sizeof(arr) / sizeof(int);

    insertionSort(arr, size);
    printArray(arr, size);
    
    return 0;
}