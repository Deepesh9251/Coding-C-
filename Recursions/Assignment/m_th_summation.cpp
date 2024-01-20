#include<iostream>
using namespace std;

//Q Find m-th summation of first n natural numbers where m-th summation of first n natural
//Q numbers is defined as following:
//Q If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
//Q Else :SUM(n, 1) = Sum of first n natural numbers.

int sumOfNaturalNumbers(int n){
    int sum = n;
    while(n--){
        sum = sum + n;
    }
    return sum;
}

int mthSummation(int n, int m){
    if(m <= 1){
        //+ return sumOfNaturalNumbers(n);
        if(n == 1){
            return 1;
        }
        return n + mthSummation(n-1, m);
    }
    return mthSummation(mthSummation(n, m-1), 1);
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<mthSummation(n,m);
    
    return 0; 
}