#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int> l = {1,2,3,4,9};
    list<int> :: iterator i = l.begin(); //* Iterators
    cout<<*i<<endl;

    auto j = l.end(); //* Iterators
    j--;        //* j pointing to the memory location after the last element so to print the last element we have to move itr to one step backward.
    cout<<*j<<endl;

    list<int> l2 = {1,2,3,4,7};
    list<int> :: reverse_iterator rj = l2.rend();   //* Reverse_Iterator
    auto ri = l2.rbegin();                          //* Reverse_Iterator

    cout<<*ri<<endl;
    rj--;                                          //* rj pointing to the memory location after the last element in the reverse direction so to print the last element in the reverse traversal i.e. the first element of the list, we need to move the itr to one step back.
    cout<<*rj<<endl;    

    advance(i,3);    //* moves forward the i by 3 steps i.e. 1->2->3->4
    cout<<*i<<endl;

    advance(ri,4);  //* moves forward the ri in reverse direction as ri is reverse iterator by 4 steps i.e. 7->4->3->2->1
    cout<<*ri<<endl;


    for(auto a : l){      //* traversal using range based loop or for-each loop
        cout<<a<<" ";
    }cout<<"\n";

    for(auto itr = l.begin(); itr != l.end(); itr++){     //* traversal using the iterators
        cout<<*itr<<" "; 
    }cout<<endl;

    for(list<int> :: reverse_iterator itr = l.rbegin(); itr != l.rend(); itr++){    //* reverse traversal using the reverse iterators.
        cout<<*itr<<" ";
    }cout<<endl;

    return 0;
}