#include<iostream>
using namespace std;
#include "LinkedList.h"

Node:: Node(int val){
    this->val = val;
    this->next = NULL;
}

LinkedList:: LinkedList(Node* head){
    this->head = head;
}

void LinkedList:: input(int size){
    if(size == -1){
        cout<<"How many elements do you want to insert in Linked List: ";
        cin>>size;
    }
    cout<<"Enter the elements: "<<endl; 
    while(size--){
        int x;
        cin>>x;
        insertAtLast(x);
    }
}

void LinkedList:: print(){
    Node* ptr = head;
        while(ptr != NULL){
            cout<<ptr->val<<" -> ";
            ptr = ptr -> next;
        } cout<<"NULL"<<endl;
    
}

void LinkedList:: insertAtLast(int val){
    if(head == NULL){ //# If the linked list is empty
        head = new Node(val);
        return;
    }
    
    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    Node* newNode = new Node(val);
    ptr->next = newNode;
    newNode->next = NULL;
}

void LinkedList:: insertAtHead(int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void LinkedList:: insert(int val, int pos){
    if(pos == 0) {
        insertAtHead(val);
        return;
    }
    Node* ptr = head;
    for(int i = 0; i < pos-1; i++){
        ptr = ptr->next;
    }
    Node* newNode = new Node(val);
    newNode->next = ptr->next;
    ptr->next = newNode;
}

void LinkedList:: insertArray(int* arr, int size){
    for(int i = 0; i < size; i++){
            insertAtLast(arr[i]);
        }
    return;
}

void LinkedList:: deleteNode(int pos){
    if(pos == 0){
        deleteHead();
        return;
    }
    Node* ptr = head;
    for(int i = 0; i < pos-1; i++){
        ptr = ptr -> next;
    }
    Node* temp = ptr->next;
    ptr->next = temp->next;
    delete(temp);
}

void LinkedList:: deleteHead(){
    Node* temp = head;
    head  = head->next;
    delete(temp);
}

void LinkedList:: deleteTail(){
    Node* temp = head;
    while((temp->next)->next != NULL){
        temp = temp -> next;
    }
    delete(temp->next);
    temp->next = NULL;
}

void LinkedList:: update(int newValue, int pos){
    Node* ptr = head;
    for(int i = 0; i < pos; i++){
        ptr = ptr -> next;
    }
    ptr->val = newValue;
}