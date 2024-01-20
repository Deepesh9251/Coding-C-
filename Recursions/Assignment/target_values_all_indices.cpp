#include<iostream>
#include<vector>
using namespace std;

void targetValueAllIndices(int arr[], int size, int target, vector<int> &ans, int idx = 0){
    if(idx == size) return;
    if(arr[idx] == target) ans.push_back(idx);
    
    targetValueAllIndices(arr, size, target, ans, idx + 1);
}

int main(){
    int arr[] = {1,2,8,7,5,3,4,9,6,7,1,2,4,6,9,7,5,8,5,3,1,4};
    int size = sizeof(arr) / sizeof(int);
    int target = 11;

    vector<int> ans;
    targetValueAllIndices(arr, size, target, ans);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    if(ans.size() == 0) cout<<"Not found!!!"<<endl;

    return 0;
}