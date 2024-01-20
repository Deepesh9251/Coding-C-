#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void printLinkedList(Node* head){
    while(head != NULL){
        cout<<head->val<<" -> ";
        head = head->next;
    } cout<<"NULL";
    cout<<endl;
    return;
}

void insertAtFirst(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtLast(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr -> next;
    }
    ptr->next = newNode;
}

void insert(Node* &head, int val, int k){
    //# We have to insert the node at kth position, means kth element has value 'val'.
    //# This implementation is based on 0-based indexing. It is not using 1-based indexing.
    //+ commented lines use 1-based indexing.

    //+ if(k == 1) {                    //* Same as Insertion at head
    if(k == 0) {                        //* Same as Insertion at head
        insertAtFirst(head, val);
        return;
    }
    Node* ptr = head;
    //+ for(int i = 0; i < k-2; i++){
    for(int i = 0; i < k-1; i++){
        ptr = ptr->next;
    }
    Node* newNode = new Node(val);
    newNode->next = ptr->next;
    ptr->next = newNode;

}

void update(Node* &head, int newValue, int position){
    //# Using 0-based indexing

    Node* ptr = head;
    for(int i = 0; i < position; i++){
        ptr = ptr -> next;
    }
    ptr->val = newValue;
}

int main(){
    Node* head = NULL;
    printLinkedList(head);
    insertAtFirst(head, 40);
    printLinkedList(head);
    insertAtLast(head, 30);
    printLinkedList(head);
    insert(head, 10, 2);         // insertion at last
    printLinkedList(head);
    insert(head, 90, 3);         // insertion at last
    printLinkedList(head);
    insert(head, 110, 2);      
    printLinkedList(head);
    insert(head, 210, 0);        // insertion at head
    printLinkedList(head);
    insert(head, 69, 6);         // Insertion at last
    printLinkedList(head);
    update(head, 0, 6);
    printLinkedList(head);
    return 0;
}