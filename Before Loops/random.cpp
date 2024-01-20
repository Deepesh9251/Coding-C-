#include<iostream>

using namespace std ;
int main(){
    int a, b;
    (true|| 4/0 == 3) ? a=2 : a=4;
    cout<< a;
    return 0;
}