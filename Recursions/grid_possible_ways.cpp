#include<iostream>
using namespace std;

//+ void possibleWays(int m, int n, int* count){
//+     if(m <= -1 || n <= -1){
//+         return;
//+     }
//+     if(m == 0 || n == 0){
//+         *count += 1;
//+         return;
//+     }
//+     possibleWays(m - 1, n, count);
//+     possibleWays(m, n - 1, count);
//+ }

int possibleWays(int m, int n ){
    if(m <= -1 || n <= -1) return 0;
    if(m == 0 || n == 0) return 1;

    return possibleWays(m - 1, n) + possibleWays(m, n - 1);
}

int main(){
    int m = 4; 
    int n = 3;
    int count = possibleWays(m - 1, n - 1);
    
    
    cout<<count;
}