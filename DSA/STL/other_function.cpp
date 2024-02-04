#include<iostream>
#include<list>
using namespace std;

void print(list<int> &l){
    for(int x:l){
        cout<<x<<" ";
    }cout<<endl;    
    return;
}

int main(){
    list<int> l;
    l.push_front(5);
    print(l);
    l.push_front(6);
    print(l);
    l.push_back(9);
    print(l);
    l.push_back(7);
    print(l);
    l.pop_back();
    print(l);
    l.pop_front();
    print(l);
    
    return 0;
}