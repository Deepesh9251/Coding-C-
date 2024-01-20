#include<iostream>
using namespace std;

int powerOptimised(int p , int q){
    if ( q == 1 || p == 1) return p;
    if (q%2 == 0){
        return powerOptimised(p, q/2) * powerOptimised(p, q/2);
    } else{
        return p * powerOptimised(p, q/2) * powerOptimised(p, q/2);
    }
}

int main () {

    int p = 7;
    int q = 9;

    int result = powerOptimised(p,q);
    cout << result << endl;

    return 0;
}