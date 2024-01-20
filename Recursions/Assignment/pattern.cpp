#include<iostream>
using namespace std;

//Q print the patter: n, n-5, n-10, ..., 0, 5, 10,..., n-5, n
//Q e.g.
//Q 16, 11, 6, 1, -4, 1, 6, 11, 16   or   15, 10, 5, 0, 5, 10, 15

void pattern(int n){
    if(n <= 0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    pattern(n - 5);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    
    return 0;
}