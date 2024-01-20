#include<iostream>
#include<limits.h>

using namespace std;

int minEle(int arr[], int si, int li){
    int min = arr[si];
    for(int i = si; i < li; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int maxEle(int arr[], int si, int li){
    int max = arr[si];
    for(int i = si; i < li; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr[] = {1,6,5,7,10,8,9};
    // int arr[] = {5,6,2,8,10,9};
    int n = sizeof(arr)/sizeof(int);
    int index = -1;

    for(int i = 1; i < n-1; i++){

        if(arr[i] > maxEle(arr,0,i) && arr[i] < minEle(arr,i+1,n)){
            index = i;
            break;

        }
    }

    // cout<<maxEle(arr,5+1,6)<<" "<<minEle(arr, 0, 1-1)<<endl;
    // cout<<maxEle(arr)<<" "<<minEle(arr)<<endl;d

    cout<<"The required element is arr["<<index<<"] = "<<arr[index]<<endl;


    return 0;
}