#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
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
        while(ptr -> next != NULL){
            ptr = ptr -> next;
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

void printReverse(Node* ptr){
    if(ptr == NULL) return;
    printReverse(ptr->next);
    cout<<ptr->data<<" -> ";
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(int);

    LinkedList ll;
    ll.insertArray(arr, size);
    printReverse(ll.head);
    cout<<"NULL"<<endl;
    ll.print();
    return 0;
}