#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,67,52,145,2,35,1,56,25,625,2,5,6,3,5,4,5,25,6,7,2,2};
    int size = sizeof(arr)/sizeof(int);

    const int N = 1e5;               // This is new learning
    vector<int> tempVec(N,0);        // This is also new learning

    for(int i = 0; i < size; i++){
        tempVec[arr[i]]++;
    }

    int q;
    cout<<"Enter number of queries : "<<endl;
    cin>>q;
    while(q--){
        cout<<"Enter query element : ";
        cin>>q;
        cout<<q<<" is present "<<tempVec[q]<<" times"<<endl;
    }
    
    return 0;
}