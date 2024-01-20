#include<iostream>
using namespace std;

bool hasTarget(int arr[],int size, int target, int idx = 0){
    if(idx == size) return false;          
    //* if you dont write this line then the answer will always true, because idx will keep on increasing and at one point arr[idx] will be pointing to the target variable address, and at that point the base condition will be triggered. INTERESTING !!! :-)
    if(arr[idx] == target) return true;

    return hasTarget(arr, size, target, idx + 1);
}

int main(){
    int arr[] = {3,4,7,34,78,39,8,35,12,68,35,73,2,53};
    int size = sizeof(arr) / sizeof(int);
    int target = 73;
    cout<<(hasTarget(arr, size, target) ? "Yes" : "No");
    
    return 0;
}