#include<iostream>
using namespace std;
float comb(float n, float r){
    if(r == 1){
        return n;
    }
    else if(r == 0){
        return 1;
    }
    return (n/r)*comb(n-1, r-1);
}

int main(){
    int n = 5;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }
        for(int j = 0; j < i + 1; j++){
            cout<<comb((float)i,(float)j)<<" ";
        }   
        
        cout<<endl;

    }
    
    
    return 0;
}