#include<iostream>
#include<list>
using namespace std;

void printList(list<char> &l){
    for(auto x: l){
        cout<<x<<" ";
    }cout<<endl;
    return;
}

int main(){
    list<char> l = {'a', 'b', 'c', 'd', 'e'};
    list<char> :: iterator itr = l.begin();
    advance(itr, 3);
    
    l.insert(itr, 'z'); //* insert 'z' before itr
    printList(l);

    l.insert(itr, 3, 'x');  //* insert 'x' 3 times before itr
    printList(l);

    list<char> :: iterator si = l.begin();
    advance(si, 2);
    list<char> :: iterator li = l.begin();
    advance(li, 8);
    l.insert(itr,si,li);      //* insert the elements present between si and li are insert before itr.
    printList(l);

    list<char> :: reverse_iterator rsi = l.rbegin();
    advance(rsi, 2);
    list<char> :: reverse_iterator rli = l.rbegin();
    advance(rli, 8);
    l.insert(itr, rsi, rli);   //* the elements present between rsi and rli taken in reverse direction are inserted before itr, becuase the iterators are reverse iterators so they are insert in reverse direction also.
    printList(l);



    return 0;
}