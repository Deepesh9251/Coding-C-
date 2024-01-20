#include<iostream>
using namespace std;

int multiplyRecursive(int a, int b, bool isNegative = false){
    a = abs(a);
    b = abs(b);
    if(a == 0 || a == 1 || b == 1) return a;
    if(b == 0) return 0;
    
    int absProduct = (a + multiplyRecursive(a, b - 1));
    return isNegative ? (-1)*absProduct : absProduct;
}

int main(){
    int a = 10; 
    int b = 99;
    bool isNegative = false;
    if((a < 0 && b > 0) || (a > 0 && b < 0)) isNegative = true;
    cout<<multiplyRecursive(a, b, isNegative);
    
    return 0;
}