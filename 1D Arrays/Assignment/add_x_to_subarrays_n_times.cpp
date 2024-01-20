#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,0,0,0,0,0,0,0};
    int size = sizeof(arr)/sizeof(int);

    int x;
    cout<<"Enter the updation number: ";
    cin>>x;
    int q;
    cout<<"Enter number of updates: ";
    cin>>q;

    while(q--){
        int l, r;
        cout<<"Enter first and last index of the subarray for updation : ";
        cin>>l>>r;
        for(int i = l; i <= r; i++){
            arr[i]+=x;
        }
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}