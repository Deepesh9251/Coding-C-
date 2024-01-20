#include<iostream>
using namespace std;

//


void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){ // comment
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

void sort0s1s2s(int arr[], int size){
    int low = 0, mid = 0, high = size-1;
    while(mid < high){
        if(arr[mid] == 0){
            swap(&arr[mid], &arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else if(arr[mid] == 2) {
            swap(&arr[mid], &arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[] = {0,0,1,0,0,1,1,0,2,1,0,0,1,1,0,1,1,2,2,2,1,0,2,0,0,1,1};
    int size = sizeof(arr) / sizeof(int);

    sort0s1s2s(arr, size);
    printArray(arr, size);
    return 0;
}