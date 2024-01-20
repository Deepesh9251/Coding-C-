#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;
    v = {-1,0,2,3,5,7,8,10};
    int target = -11;
    bool flag;
    int i = 0, j = v.size()-1;
    int sum = v[i] + v[j];
    for(i = 0, j = v.size()-1; i<j;  ){
        sum = v[i] + v[j];
        if(sum < target){
            i++;
        }
        else if(sum > target){
            j--;
        }
        else if(sum==target && i!=j){
            flag = true;
            break;
        }
        flag = false;

    }
    flag? cout<<"v["<<i<<"] + v["<<j<<"] = "<<v[i] + v[j]<<endl : cout<<"No";
    return 0;
}