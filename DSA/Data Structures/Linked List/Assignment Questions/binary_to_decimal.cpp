#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void insertAtLast(int val){
        if(head == NULL){
            head = new Node(val);
            return;
        }
        Node* ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new Node(val);
    }

    void insertArray(int* arr, int &size){
        for(int i = 0; i < size; i++){
            insertAtLast(arr[i]);
        }
    }

    void print(){
        Node* ptr = head;
        while(ptr != NULL){
            cout<<ptr->data<<" -> ";
            ptr = ptr -> next;
        } cout<<"NULL"<<endl;
    }

};

int binaryToDecimal(Node* &head, int &mul){
    if(head == NULL) return 0;
    if(head->next == NULL) return head->data;
    int val = binaryToDecimal(head->next, mul);
    mul = mul*2;
    return val + mul*head->data;
}

int main(){
    LinkedList ll;
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    ll.insertArray(arr,size);
    int mul = 1;
    cout<<binaryToDecimal(ll.head, mul)<<endl;
    ll.print();

    return 0;
}