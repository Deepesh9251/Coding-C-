#include<iostream>
using namespace std;


int numOfIntegralSolutions(int n, int sum){
    //* Base Case, if sum is zero and n is non zero then there is only one solution i.e. all zeros.
    if(sum == 0 && n != 0){
        return 1;
    }
    //* If sum is non zero and n is 1 or 0 then there are 1 or 0 solutions possible resp.
    if(n == 1 || n == 0){
        return n;
    }
    
    int count = 0;
    //-  for(int i = 0; i <= n; i++){
    for(int i = 0; i <= sum; i++){ 
            //* i denotes the value given to the variable. so i will range from 0 to sum because any variable can only hold number less than sum and positive.
        count = count + numOfIntegralSolutions(n - 1, sum - i);
    }
    return count;
}

int main(){
    int n; // number of variables in the equations
    cin>>n;
    int val; // sum of those variables
    cin>>val;
    cout<<numOfIntegralSolutions(n, val); // number of non-negative integral solutions 
    
    return 0;
}