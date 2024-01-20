#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> mergeOverlappingIntervals(int arr[][2], int r, int c){
    vector<vector<int>> ans;
    ans.push_back((vector<int>){arr[0][0],arr[0][1]});
    int k = 0;
    for(int i = 0; i < r; i++){ 
        if(ans[k][1] >= arr[i][0]){
            ans[k][1] = max(ans[k][1], arr[i][1]);
        }
        else{
            k++;
            ans.push_back((vector<int>){arr[i][0],arr[i][1]});
        }
    }
    return ans;
}

int main(){
    
    int arr[4][2] = {
        1, 5,
        3, 8,
        11, 14,
        14, 17
    };
    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(arr[0][0]);
    vector<vector<int>> mergedArrayVec = mergeOverlappingIntervals(arr, r, c);
    for(int i = 0; i < r; i++)  {
        cout<<mergedArrayVec[i][0]<<" "<<mergedArrayVec[i][1]<<" "<<endl;
    }
    return 0;
}