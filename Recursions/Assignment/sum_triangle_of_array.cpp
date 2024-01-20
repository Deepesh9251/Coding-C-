#include<iostream>
using namespace std;

void sumTrianglePattern(int arr[], int size, int idx = 0){
    if(idx == size) return; 
    int tempPrev = 0;
    int temp = arr[idx];

    for(int i = idx; i < size; i++){
        cout<<arr[i]<<" ";
        tempPrev = arr[i];
        if(i != idx){
            arr[i] = arr[i] + temp;
            temp = tempPrev;
        }
    }
    cout<<endl;
    sumTrianglePattern(arr, size, idx+1);
    
}

int main(){
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    sumTrianglePattern(arr, size);
    
    return 0; 
}