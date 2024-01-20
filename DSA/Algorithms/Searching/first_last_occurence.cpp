#include<iostream>
using namespace std;

void firstLastPosition(int arr[], int si, int li, int target, int& first, int& last){
    if(si > li) return;
    int mid = si + (li - si) / 2;
    if(arr[mid] > target) return firstLastPosition(arr, si, mid-1, target, first, last);
    else if(arr[mid] < target) return firstLastPosition(arr, mid+1, li, target, first, last);
    else{
        if(mid < first) first = mid;
        if(mid > last) last = mid;
        firstLastPosition(arr, si, mid-1, target, first, last);
        firstLastPosition(arr, mid+1, li, target, first, last);
    }
    
    return;

}

int main(){
    int arr[] = {0,2,6};
    int size = sizeof(arr) / sizeof(int);
    int target = 2;
    int firstOccurence = size;
    int lastOccurence = -1;

    firstLastPosition(arr, 0, size-1, target, firstOccurence, lastOccurence);
    cout<<firstOccurence<<" "<<lastOccurence;
    return 0;
}