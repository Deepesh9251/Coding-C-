#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,5,1,5,9,7,0,0,8,7,2,8,9};
    int size = sizeof(arr)/sizeof(int);
    bool isDouble;
    int ele = -1;
    for(int i = 0; i < size; i++){
        isDouble = false;
        for(int j = 0; j < size; j++){
            if(i==j){
                continue;
            }
            if(arr[i] == arr[j]){
                isDouble = true;
                break;
            }
        }
        if(isDouble == false){
            ele = arr[i];
        }
    }
    
    cout<<ele;
    return 0;
}