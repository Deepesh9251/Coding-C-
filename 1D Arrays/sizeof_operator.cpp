#include<iostream>
using namespace std;

int main(){
    long double arr[]= {34,42,41, 34};
    cout<<(arr+ 3);
    cout<<endl<<sizeof(arr)<<" "<<sizeof(arr)/sizeof(long double);
    return 0;
}