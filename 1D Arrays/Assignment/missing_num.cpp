#include <iostream>
using namespace std;


int main(){
    int arr[] ={0,1,6,7,8,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int brr[n + 1];
    for(int i = 0; i < n + 1; i++){
        brr[i] = 0;
    }

    for(int i = 0; i < n; i++){
        brr[arr[i]] = -1;
    }

    int missingNumber;
    for(int i = 0; i < n + 1; i++){
        if(brr[i] != -1){
            missingNumber = i;
            break;
        }
    }

    cout<<"Missing Number is : "<<missingNumber<<endl;
    
    return 0;
}