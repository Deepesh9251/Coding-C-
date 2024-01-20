#include<iostream>
using namespace std;

int maxEle(int* arr, int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        max = (max < arr[i]) ? arr[i] : max;
    }
    return max;
}

void countSort(int* arr, int size, int pos){
    int count[10] = {0};
    for(int i = 0; i < size; i++){
        count[(arr[i] / pos) % 10 ]++;
    }

    for(int i = 1; i < 10; i++){
        count[i] = count[i] + count[i-1];
    }

    int ans[size];
    for(int i = size-1; i >= 0; i--){
        count[(arr[i] / pos) % 10]--;
        ans[count[(arr[i] / pos) % 10]] = arr[i];
    }
    
    for(int i = 0; i < size; i++){
        arr[i] = ans[i];
    }
    return;
}

void radixSort(int* arr, int size){
    int max = maxEle(arr, size);

    for(int pos = 1; max / pos > 0; pos *= 10){
        countSort(arr, size, pos);
    }
    return;
}

int main(){
    int arr[] = {13,425,1,673,12,643,533,21,672,83,0};
    int size = sizeof(arr) / sizeof(int);

    radixSort(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
    
    return 0;
}