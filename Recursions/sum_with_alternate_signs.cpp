#include<iostream>
using namespace std;

int sumWithAlternateSigns(int n){
    if(n < 1){
        cout<<"Invalid Input!!!"<<endl<<"Input: ";
        return n;
    }
    if(n == 1){
        return 1;
    }
    return sumWithAlternateSigns(n - 1) + (n%2 == 0 ? -n:n);
}

int main(){

    int n;
    cin>>n;
    cout<<sumWithAlternateSigns(n);
    return 0;
}