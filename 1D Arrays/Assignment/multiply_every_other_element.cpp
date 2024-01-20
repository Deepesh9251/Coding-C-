#include<iostream>
using namespace std;

int main(){
    int arr[] = {-3,1,6,3};
    int size = sizeof(arr)/sizeof(int);
    int product = 1;
    int zeroCount = 0;
    
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
            continue;
        }
        if(zeroCount == 2){
            product = 0;
            break;
        }
        product *= arr[i];
    }

    for(int i = 0; i < size; i++){
        if(zeroCount == 2){
            arr[i] = 0;
            continue;
        }
        if(zeroCount == 1){
            if(arr[i] == 0){
                arr[i] = product;
                continue;
            }
            arr[i] = 0;
            continue;
        }
        arr[i] = product / arr[i];
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}