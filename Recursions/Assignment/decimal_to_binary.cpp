#include<iostream>
using namespace std;

int decimalToBinary(int n){
    if(n == 0 || n == 1) return n;
    double remainder = n % 2;
    return decimalToBinary(n / 2)*10 + remainder;
}

int binaryToDecimal(int n){
    if(n == 0 || n == 1) return n;

    int lastDigit = n % 10;
    return binaryToDecimal(n / 10)*2 + lastDigit;
}

int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
    
    return 0;
}