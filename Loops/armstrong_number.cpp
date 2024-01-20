#include<iostream>
using namespace std;

bool isArmstrong(int n ){
    int sum = 0;
    int num = n;
    for( ; num != 0; ){
        int digit = num%10;
        num /= 10;
        sum = sum + digit*digit*digit;
    }
    if(sum == n){
        return true;
    }else{
        return false;
    }
}

int main(){
    for(int i = 1; i < 10000 ; i++){
        if(isArmstrong(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}