#include<iostream>
using namespace std;

void printMultiples(int n, int k){
    if(k == 0) return; //# Base case

    printMultiples(n, k-1);   //# assumption: if I can print k-1 multiples then I will print nth multiple by multiplying n and k.
    cout<<n*k<<" ";           //# self work: print kth multiple of n
    
    return;
}

int main(){
    int n, k;
    cin>>n>>k;
    printMultiples(n, k);
    
    return 0;
}