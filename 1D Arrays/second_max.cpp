#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {6,7,8,9,9,9,10,10,11,11,12};
    int size = sizeof(arr)/sizeof(int);
    int max = INT_MIN;
    int sec_max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            sec_max = max;
            max = arr[i];
        }
        if(arr[i] < max && arr[i] > sec_max){
            sec_max = arr[i];
        }
    }

    cout<<max<<" "<<sec_max;
    return 0;
}