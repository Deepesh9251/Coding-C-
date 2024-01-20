#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int si, int li){
    int i = li;
    int j = li;
    while(j > si){
        if(arr[j] > arr[si]){
            swap(&arr[i], &arr[j]);
            i--;
        }
        j--;
    }
    swap(&arr[j], &arr[i]);
    return i;
}

void quickSort(int* arr, int si, int li){
    if(si >= li) return;

    int pivotIndex = partition(arr, si, li);
    quickSort(arr, si, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, li);

    return;
}

int main(){
    int arr[] = {9,65,3,1,6,73,96,37,18,52,2,5,6,3,2,1,6,83};
    int li = sizeof(arr) / sizeof(int) - 1;
    quickSort(arr, 0, li);
    for(int i = 0; i <= li; i++) cout<<arr[i]<<" ";
    return 0;
}