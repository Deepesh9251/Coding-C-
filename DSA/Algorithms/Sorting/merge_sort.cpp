#include<iostream>
using namespace std;

void merge(int arr[], int si, int mid, int li){
    int size1 = mid - si + 1;
    int size2 = li - mid;

    int a[size1];
    int b[size2];

    for(int i = 0; i < size1; i++){
        a[i] = arr[si + i];
    }
    for(int i = 0; i < size2; i++){
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int idx = si;

    while (i < size1 && j < size2){
        if(a[i] < b[j]) arr[idx++] = a[i++];
        else arr[idx++] = b[j++];
    }
    while(i < size1) arr[idx++] = a[i++];
    while(j < size2) arr[idx++] = b[j++];
    
    return;
}

void mergeSort(int arr[], int si, int li){ //* si and li are actual index values of array.[li = size - 1]
    if(si >= li) return;

    int mid = ((si + li) / 2);
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, li);
    merge(arr, si, mid, li);
    return;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    return;
}

int main(){
    int arr[] = {9,8,7,8,4,5,24,1}; //{0,1,2,3,4,100,101,102}
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}