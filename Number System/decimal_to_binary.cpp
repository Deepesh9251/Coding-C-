#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int dec_num;
    cout<<"Enter the decimal number : ";
    cin>>dec_num;

    long long int binary_num = 0;
    long long int mul = 1;
    long long int n = dec_num;

    while(n>0){ 
        long long int parity_digit = n % 2;
        n = n / 2;
        binary_num = binary_num + parity_digit*mul;
        mul = mul * 10;
    }

    cout<<"The binary conversion of "<<dec_num<<" is : "<<binary_num<<endl;
    
    return 0;
}