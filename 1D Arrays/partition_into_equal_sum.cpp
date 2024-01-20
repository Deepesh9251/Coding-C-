#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,4,6,2};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0, prefix_sum = 0;
    int idx =-1;

    for(int i = 0; i<size; i++){                  
        sum+=arr[i];
    }
    for(int i = 0; i < size-1; i++){
        prefix_sum = prefix_sum + arr[i];
        if(prefix_sum == sum - prefix_sum){
            idx = i;
            break;
        }
    }
    cout<<sum<<" "<<idx<<endl;
    if(idx!=-1){
        cout<<"{";
        for(int  k= 0; k < idx; k++){
            cout<<arr[k]<<", ";
        } cout<<arr[idx]<<"} ";
        
        cout<<"{";
        for(int i = idx+1; i < size-1; i++){
            cout<<arr[i]<<", ";
        } cout<<arr[size - 1]<<"} "<<endl;
    }
    else {
        cout<<"NO";
    }
    return 0;
}