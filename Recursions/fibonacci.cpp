#include<iostream>
using namespace std;

int fibonacci (int n){
    if(n == 0 || n == 1 ) return n;

    return fibonacci(n-1) + fibonacci(n-2);
}
// 0 1 1 2 3 5 8 13
int main(){
    int n = 7;
    cout<<fibonacci(n)<<endl;
    return 0; 
}