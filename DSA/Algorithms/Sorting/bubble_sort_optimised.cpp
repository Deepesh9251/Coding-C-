#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void bubbleSortOptimised(int arr[], int n){
    for(int i = 1; i <= n - 1; i++){
        int no_of_swaps = 0;
        for(int j = 1; j < n - i; j++){
            if(arr[j] < arr[j - 1]){
                swap(&arr[j], &arr[j - 1]);
                no_of_swaps++;
            }
        }
        if(no_of_swaps == 0) return;
    }
}

int main(){
    int arr[] = {4,6,7,3,8,2,9};
    int size = sizeof(arr) / sizeof(int);

    bubbleSortOptimised(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}