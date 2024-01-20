#include<iostream>
using namespace std;

bool isPrime(int n, int i = 2){
    if(n <= 0 || n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(i == n / 2) return (n % i != 0);
    return (n % i != 0) && isPrime(n, i+1);
}

int main(){
    int n;
    // cin >> n;
    for(int n = 0; n < 1000; n++) isPrime(n) ? cout<<n<<endl : cout<<"";
    
    return 0;
}