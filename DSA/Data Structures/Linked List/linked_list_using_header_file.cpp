#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    Node* head = NULL;
    LinkedList ll(head);
    ll.insert(5,0);
    ll.insertAtLast(8);
    ll.deleteHead();
    int arr[] = {8,4,29,4};
    ll.insertArray(arr, 4);
    ll.print();
    
    return 0;
} 