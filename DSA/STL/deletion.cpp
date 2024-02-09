#include<iostream> 
#include<list>
using namespace std;

void printList(list<int> &l){
    for(auto x: l){
        cout<<x<<" ";
    }cout<<endl;
    return;
}


int main(){
    list<int> l = {1,2,3,4,5,6,7,9,77,8};
    auto itr = l.begin();
    advance(itr, 3);
    l.erase(itr);
    printList(l);
    auto ltr = l.begin();
    advance(ltr, 6);
    itr = l.begin();
    l.erase(itr,ltr);
    printList(l);
    cout<<*(itr)<<" "<<*(ltr)<<endl;

    //*_ Now these iterators are pointing to the nodes but the nodes are not connected to list, so we cant use them for the list traversal without again pointing them to the list nodes.
    list<int> l2 = {1,2,3,4,5,6,7,8};
    printList(l2);
    list<int> :: iterator itr7 = l2.begin();
    advance(itr7, 5);
    list<int> :: iterator itr69 = l2.begin();
    advance(itr69, 3);
    l2.erase(itr69, itr7);
    printList(l2);

    return 0;
}