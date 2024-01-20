#include<iostream>
using namespace std;

int pow(int a, int b){
    if(a == 1 || a == 0) return a;
    if(b == 0) return 1;
    int n = pow(a, b / 2);
    if(b % 2 == 0){
        return n * n;
    } else{
        return n * n * a;
    }
}

bool isArmstrong(int n,int numCopy, int d, int sum = 0){
    sum = sum + pow(n % 10, d);
    if(n == 0){
        return sum == numCopy;
    }
    isArmstrong(n / 10, numCopy, d, sum);

}

int main(){
    // int n; 
    // cin>>n;
    for(int i = 0; i < 100000; i++){
        int num = i;
        int digits = 0;
        while(num != 0){
            digits++;
            num = num / 10;
        }
        isArmstrong(i, i, digits) ? cout<<i<<" : Yes\n" : cout<<"";
    }
    return 0;
} 