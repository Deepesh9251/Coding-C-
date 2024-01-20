#include<iostream>
using namespace std;

int binarySearch(int* arr, int si, int li, int target){
    if(si > li) return -1;
    //! int mid = (si + li)/2; causes integer overflow when si & li --> INT_MAX
    int mid = si + (li - si) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) return binarySearch(arr, si, mid-1, target);
    else return binarySearch(arr, mid+1, li, target);

}

int main(){
    int arr[] = {1,2,3,4,5,5,6,7,8,8,9,10};
    int size = sizeof(arr) / sizeof(int);
    int target = 9;
    cout<<binarySearch(arr, 0, size, target); 
    
    return 0;
}