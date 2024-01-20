#include<iostream>
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
    cout<<endl;
    return;
}

void zerosToEnd(int arr[], int size){
    int zerosCount = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zerosCount++;
        }
    }
    int i = 0;
    int j = size - 1;
    while(){
        if(arr[j] == 0){
            j--;
        }
        if(arr[i] == 0){
            swap(&arr[i], &arr[j]);
            j--;
        }
    }
}


int main(){
    int arr[] = {0,5,0,7,8,3,9,0,8,0,22,4,0};
    int size = sizeof(arr) / sizeof(int);

    zerosToEnd(arr, size);
    printArray(arr, size);
    
    return 0;
}