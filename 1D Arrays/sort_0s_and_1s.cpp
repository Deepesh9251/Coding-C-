#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int arr[] = {1,0,0,0,1,0,0,1};
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0, j = size -1; i<j; ){
        if(arr[i]>arr[j]){
            arr[i++] = 0;
            arr[j--] = 1;
        }
        else if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<' ';
    }
    
    return 0;
}