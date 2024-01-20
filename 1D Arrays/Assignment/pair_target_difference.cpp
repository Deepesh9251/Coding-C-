#include<iostream>
using namespace std;

int main(){

    int arr[] = {5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int target = 4;
    bool check = false;
    int idx1, idx2;

    for(int i = 0, j = 1; ; ){
        if(abs(arr[i] - arr[j])<target){
            j++;
        }
        else if(abs(arr[i] - arr[j])>target){
            i++;
        } 
        else{
            check = true;
            idx1 = i;
            idx2 = j;
            break;
        }
    }
    
    if(check){
        cout<<"("<<arr[idx1]<<", "<<arr[idx2]<<")"<<endl;
    }
    else{
        cout<<"No pair found"<<endl;
    }
    
    return 0;                 
}