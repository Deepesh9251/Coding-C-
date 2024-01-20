#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int si, int li){
    int i = si;    //# to place elements
    int j = si;    //# to find the place for elements
    while(j < li){
        if(arr[j] < arr[li]){
            swap(&arr[i], &arr[j]);
            i++;
        }
        j++;
    }
    swap(&arr[i], &arr[j]);
    return i;

}

void quickSort(int* arr, int si, int li){

    if(si >= li) return; 
    
    int pivotIndex = partition(arr, si, li);  //* It will place pivot element to its correct position and it will return the correct index of pivot element.
    quickSort(arr, si, pivotIndex-1);
    quickSort(arr, pivotIndex + 1, li);

    return;
}

int main(){

    int arr[] = {34,88,88,88,5,678,56,32,6,63,36,2525,13,23,67};
    int size = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, size-1);
    for(int i = 0; i < size; i++) cout<<arr[i]<<" ";
    return 0;
}