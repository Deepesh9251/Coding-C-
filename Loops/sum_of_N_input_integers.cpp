#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x ;
    int sum=0;
    do{
        cin>>x;
        sum=sum+x;
        n--;
    } while(n!=0);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}