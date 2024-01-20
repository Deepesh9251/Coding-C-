#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void separatePositiveNegative(int arr[], int size){
    int idx = 0;
    int j = size - 1;
    while(idx < j){
        if(arr[j] > 0) {
            j--;
        }
        else if(arr[idx] > 0){
            swap(&arr[j], &arr[idx]);
        }
        else{
            idx++;
        }
    }
}



int main(){
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    separatePositiveNegative(arr, size);

    printArray(arr, size);
        
    return 0;
}