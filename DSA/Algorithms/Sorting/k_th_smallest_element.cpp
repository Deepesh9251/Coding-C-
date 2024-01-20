#include<iostream>
#include<limits.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int* arr, int si, int li){
    int i = si;
    int j = si;
    while(j < li){
        if(arr[j] < arr[li]){
            swap(&arr[i], &arr[j]);
            i++;
        }
        j++;
    }
    swap(&arr[i], &arr[li]);
    return i;
}

int kthSmallestElement(int* arr, int si, int li, int size, int k){
    if(k < 1) return INT_MIN;
    if(k > size) return INT_MAX;
    int idx = partition(arr, si, li);
    if(idx == k-1) return arr[idx];

    else if(idx > k-1) return kthSmallestElement(arr, si, idx-1, size, k);
    else return kthSmallestElement(arr, idx+1, li, size, k);
}

int main(){
    int arr[] = {5,4,3,2,4,6,3,4,6,6,3,2,1};
    int size = sizeof(arr) / sizeof(int);

    int k = 7;
    cout<<k<<"th element : "<<kthSmallestElement(arr, 0, size-1, size, k)<<endl;
    printArray(arr,size);
    return 0;   
}