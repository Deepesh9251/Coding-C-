#include<iostream>
#include<limits.h>
using namespace std;

int squareRoot(double x){  //# Linear search kind of algorithm
    if(x < 0) cout<<"INVALID INPUT! ";
    int ans;
    for(int i = 0; i <= x; i++){
        if(i*i > x) break;
        ans = i;
    }
    return ans;
}

// int squareRoot(double x){ //# Binary search kind of algorithm
//     if(x < 0) cout<<"INVALID INPUT! ";
//     int low = 0; 
//     int high = x;
//     int ans;
//     while(low <= high){
//         int mid = low + (high - low) / 2;
//         if(mid*mid > x) high = mid - 1;
//         else {
//             ans = mid;
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

int main(){
    for(int i = -2; i < 100; i++){
        cout<<"sqrt("<<i<<") = "<<squareRoot(i)<<endl;
    }
    
    return 0;
}