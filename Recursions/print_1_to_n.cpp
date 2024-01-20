#include<iostream>
using namespace std;

void printIncSubSeq(int n){
    if(n <= 0){
        return;
    }
    printIncSubSeq(n-1);
    cout<<n<<" ";
    return;
}

int main(){
    int n = 10;
    // cin>>n;
    printIncSubSeq(n);
    
    return 0;
}