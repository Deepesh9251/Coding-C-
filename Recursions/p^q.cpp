#include<iostream>
using namespace std;

int power(int p, int q){
    if (q == 0 || p == 1) return 1;
    return p*power(p, q-1);
}

int main(){

    int p, q;
    cin>>p>>q;

    int result = power(p, q);
    cout<<result<<endl;
    
    
    return 0;
}