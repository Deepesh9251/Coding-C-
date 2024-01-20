#include<iostream>
using namespace std;

//Q move all zeros to end and maintain the relative order of non zero elements

void swap(int* a, int* b, int* n){
    int temp = *a; 
    *a = *b;
    *b = temp;
    (*n)++;
    return;
}

void zerosToEnd(int arr[], int size, int* swaps){   
    int lastZero = size;
    for(int i = 0; i < size; i++){
        if(arr[i] != 0) continue;
        
        for(int j = i; j <  - 1; j++){
            swap(&arr[j], &arr[j+1], swaps);
        }
        lastZero--;
    }

    return;
}



void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[] = {3,0,2,0,1,5};
    int size = sizeof(arr) / sizeof(int);
    int no_of_swaps = 0;
    zerosToEnd(arr, size, &no_of_swaps);
    printArray(arr, size);
    cout<<"Number of swaps = "<<no_of_swaps;

    return 0;
}