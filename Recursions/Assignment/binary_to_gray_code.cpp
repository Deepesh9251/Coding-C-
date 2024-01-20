#include<iostream>
using namespace std;

int binaryToGrayCode(int n){
    if( n <= -1){
        cout<<"INVALID INPUT!!!";
        return -1234423242;
    }
    if(n > -1 && n < 10) return n;
    int isDifferent = (n % 10 != ((n / 10) % 10));
    return (10 * binaryToGrayCode(n / 10)) + isDifferent;
}

int main(){
    int binary_code;
    cin>>binary_code;

    cout<<binaryToGrayCode(binary_code);
    return 0;
}