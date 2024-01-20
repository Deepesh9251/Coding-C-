#include<iostream>
#include<vector>
using namespace std;


void makeCombinationVector(int arr[], int size, int r, vector<int>& tempCombArray, int idx = 0){
    if(tempCombArray.size() == r){
        for(int i = 0; i < r; i++){
            cout<<tempCombArray[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(idx == size) return;

    tempCombArray.push_back(arr[idx]);
    makeCombinationVector(arr, size, r, tempCombArray, idx + 1);
    tempCombArray.pop_back();
    makeCombinationVector(arr, size, r, tempCombArray, idx + 1);
    
}


void makeCombinationArray(int arr[], int size, int r, int tempCombArray[], int idx = 0, int tempIdx = 0){
    if(tempIdx == r){
        for(int i = 0; i < r; i++){
            cout<<tempCombArray[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(idx == size) return;

    tempCombArray[tempIdx] = arr[idx];
    makeCombinationArray(arr, size, r, tempCombArray, idx + 1, tempIdx + 1);
    makeCombinationArray(arr, size, r, tempCombArray, idx + 1, tempIdx);
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);
    int r = 5;
    vector<int> tempAns;
    makeCombinationVector(arr, size, r, tempAns);
    cout<<endl<<endl;
    int tempAnsArr[r];
    makeCombinationArray(arr, size, r, tempAnsArr);
    return 0;
}