#include<iostream>
using namespace std;

class Node{
public: 
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void printLinkedList(Node* head){
    Node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->val<<" -> ";
        ptr = ptr -> next;
    }cout<<"NULL"<<endl;
}

void inputLinkedList(Node* &head, int n){
    while(n--){
        int val;
        cin>>val;
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
}



int main(){
    Node* head = NULL;
    // Node n1(45);
    // head = &n1;
    // Node* n2 = new Node(109);
    // Node n3(69);
    // Node* n4 = new Node(143);

    // n1.next = n2;
    // n2->next = &n3;
    // n3.next = n4;
    // n4->next = NULL;
    inputLinkedList(head,6);
    printLinkedList(head);

    return 0;
}