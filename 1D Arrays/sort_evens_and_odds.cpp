#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int arr[] = {1,3,22,1,3,4,224,0,2,23,42};
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0, j = size -1; i<j; ){
        if(arr[i]%2 == 1 && arr[j]%2 == 0){
            swap(&arr[i++],&arr[j--]);
        }
        else if(arr[i] % 2 == 0){
            i++;
        }
        else if(arr[j] % 2 == 1){
            j--;
        }
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<' ';
    }
    
    return 0;
}