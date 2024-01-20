#include<iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,5,6};
    int size = sizeof(arr)/sizeof(int);
    int target = 7;
    int pairCount = 0;
    int idx1, idx2;

    for(int i = 0, j = size-1; i<j ;){
        if(abs(arr[i] + arr[j]) < target){
            i++;
        } 
        else if(abs(arr[i] + arr[j]) > target){
            j--;
        }
        else{
            if(pairCount == 0){
                idx1 = i;
                idx2 = j--;
                pairCount++;
                continue;
            }
            else if(arr[i] == arr[idx1] || arr[i] == arr[idx2] || arr[j] == arr[idx1] || arr[j] == arr[idx2]){
                j--;
                continue;
            } 
            else{
                idx1 = i;
                idx2 = j--;
                pairCount++;
            }
        }
    }

    cout<<pairCount<<endl;


    return 0;
}