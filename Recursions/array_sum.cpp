#include<iostream>
using namespace std;

int arraySum(int arr[], int size, int idx = 0){
    if(idx == size - 1){
        return arr[idx];
    }
    return arr[idx] + arraySum(arr, size, idx+1);
}

int main(){

    int arr[] = {2,42,32};
    int size = sizeof(arr)/sizeof(int);
    //# int sum = 0;
    //# for(int i = 0; i < size; i++){
    //#     sum = sum + arr[i];
    //# }
    //# cout<<sum<<endl;
    // int *ptr = arr;
    // cout<<ptr[2]<<" "<<arr[2]<<endl;

    cout<<arraySum(arr, size);


    return 0;
}