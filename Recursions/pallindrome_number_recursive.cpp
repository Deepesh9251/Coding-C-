#include<iostream>
using namespace std;

bool isPallindrome(int num, int* temp){
    if(num < 0 || (num % 10 == 0)){
        return false;
    }
    if(num < 10){
        int digit = *temp % 10;
        *temp = *temp / 10;
        return (num == digit);
    }
    bool result = isPallindrome(num / 10, temp) && (num % 10 == *temp % 10);
    *temp = *temp / 10;
    return result;
}

int main(){

    int num = -12344321;
    // cout<<"Enter number: "<<endl;
    // cin>>num;
    int temp = num;
    cout<<isPallindrome(num, &temp);
    
    return 0;
}