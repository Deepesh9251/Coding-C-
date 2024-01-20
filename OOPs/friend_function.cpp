#include<iostream>
using namespace std;

class A{
    int x = 10;
    friend int squareX(A &obj);
};

int squareX(A &obj){
    return obj.x * obj.x;
}

int main(){
    A obj;
    cout<<squareX(obj);
    
    return 0;
}