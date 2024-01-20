#include<iostream>
using namespace std;

void printArray(int arr[],int size, int idx = 0){
    if(idx == size) return;
    cout<<arr[idx]<<" ";
    printArray(arr, size, ++idx);
}

int main(){
    int arr[] = {2,43,5,2,45,2,4,88,6,4752,0};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    
    return 0;
}