#include<iostream>
using namespace std;

int linearSearch(int* arr, int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,6,3,6,78,65,43,2,345,67,8,76,5,43,76,678,76,54,5,76};
    int size = sizeof(arr) / sizeof(int);
    int target = 56;
    cout<<linearSearch(arr, size, target);
    return 0;
}