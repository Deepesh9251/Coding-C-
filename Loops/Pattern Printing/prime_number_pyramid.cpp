#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n == 1) return false;
    for (int i = 2; i <= n/2; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n = 3;
    int num = 2;
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1;j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i + 1; j++){
            while(true){
                if(isPrime(k)){
                    cout<<k;
                    k++;
                    break;

                }
                k++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}