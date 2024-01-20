#include<iostream>
using namespace std;

void mergeTwoSorted(int* arr1, int size1, int* arr2, int size2, int* arr){
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]) arr[k++] = arr1[i++];
        if(arr2[j] <= arr1[i]) arr[k++] = arr2[j++];
    }
    while(i < size1) arr[k++] = arr1[i++];
    while(j < size2) arr[k++] = arr2[j++];

    return;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {12,234,547,876,989,1023};
    int arr2[] = {100,200,300,400,500,600,700,800,900};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int arr[size1 + size2] = {0};

    mergeTwoSorted(arr1, size1, arr2, size2, arr);

    printArray(arr, size1 + size2);
    
    return 0;
}