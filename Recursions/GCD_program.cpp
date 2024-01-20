#include<iostream>
using namespace std;

//Q GCD is greatest common divisor: GCD(32,66) = 22,   GCD(15, 40) = 5, etc...

//_ Euclid's Algorithm:
//* While finding gcd of (x, y), where x>y, we can do two operations without affecting the the gcd of (x, y).
//* Those two things are:
//* 1. x - y
//* 2. x % y


int gcdBySubstraction(int x, int y){
    if(x < 0 || y < 0){
        cout<<"INVALID INPUT!!!"<<endl;
        return -1;
    }
    if(x == y || (x == 0 || y == 0)){
        return max(x, y);
    }
    if(x > y){
        gcdBySubstraction(x - y, y);
    }
    else{
        gcdBySubstraction(x, y - x);
    }
}

int gcdByModulus(int x, int y){
    if(x < 0 || y < 0){
        cout<<"INVALID INPUT!!!"<<endl;
        return -1;
    }
    if(x == y || (x == 0 || y == 0)){
        return max(x, y);
    }
    if(x > y){
        gcdByModulus(x % y, y);
    }
    else{
        gcdByModulus(x, y % x);
    }
}

int main(){
    int x, y;
    cin>>x>>y;

    cout<<gcdByModulus(x, y)<<endl;
    cout<<gcdBySubstraction(x, y)<<endl;

    return 0;
}