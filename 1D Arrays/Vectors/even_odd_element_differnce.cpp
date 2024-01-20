#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    v = {2,4,4,1,5,2,5,7,7};
    int reqSum=0;
    for(int i = 0; i < v.size(); i++){
        if(i%2==0){
            reqSum = reqSum + v[i];
        }
        if(i%2!=0){
            reqSum = reqSum - v[i];
        }
    }

    cout<<"The required sum is : "<<reqSum<<endl;   
    
    
    return 0;
}