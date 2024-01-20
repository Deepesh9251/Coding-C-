#include<iostream>
using namespace std;

//Q. racing track with 'n' racing spots. arr[i] is position of i^th spot in increasing order. we have to place 'm' kids on these 'n' spots such that minimum distance between any two kids is maximum. return largest minimum distance.
//_ Explaination :-
//Q. e.g. arr[] = {1,2,4,8,9},    ans => 3.
//Q. 1   2      4             8   9
//Q. k1  k2    k3                         <-- case 1 : minimum distance = min(1,2) = 1
//Q. k1        k2            k3           <-- case 2 : minimum distance = min(3,4) = 3
//Q. k1        k2                 k3      <-- case 3 : minimum distance = min(3,5) = 3
//Q. k1                      k2   k3      <-- case 4 : minimum distance = min(7,1) = 1
//Q. hence largest of minimum distance => 3




bool canArrange(int* arr, int size, int mid, int kids){
    int prevKid = 0;
    int kidCount = 1;
    for(int i = 1; i < size; i++){
        if(arr[i] - arr[prevKid] >= mid){
            prevKid = i;
            kidCount++;
            // if(kidCount == kids) return true;
        }
    }

    return kidCount >= kids;
}

int largestSeparationDistance(int* arr, int size, int kids){
    int low = 1;
    int high = arr[size-1] - arr[0];
    int ans = 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(canArrange(arr, size, mid, kids)){
            low = mid + 1;
            ans = mid;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,4,8,9};
    int size = sizeof(arr) / sizeof(int);
    int kids = 3;

    cout<< largestSeparationDistance(arr, size, kids);
    
    return 0;
}