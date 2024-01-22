#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void input(int size = -1){
        if(size <= -1){
            cout<<"Enter the number of elements you want to eneter: ";
            cin>>size;
        }
        int val;
        while(size--){
            cin>>val;
            insertAtLast(val);
        }
    }
    void print(){
        Node* ptr = head;
        cout<<"NULL <- "; 
        while(ptr->next != NULL){
            cout<<ptr->data<<" <=> ";
            ptr = ptr->next;
        } cout<<ptr->data<<" -> NULL"<<endl;
    }

    void insertAtFirst(int val){
        if(head == NULL){
            head = new Node(val);
            tail = head;
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    void insertAtLast(int val){
        if(head == NULL){
            tail = new Node(val);
            head = tail;
            return;
        }
        Node* newNode = new Node(val);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }

    void insert(int val, int pos){ //* 0-based indexing
        if(pos <= 0) {
            if(pos==0) insertAtFirst(val);
            else cout<<"Invalid Position"<<endl;
            return;
        }
        Node* ptr = head;
        bool isValidPosition = true;
        while(pos--){
            if(ptr == NULL){
                cout<<"Invalid position"<<endl;
                return;
            }
            ptr = ptr -> next;
        }
        if(ptr->next == NULL){

        }
        return;
    }

    void insertArray(int* arr, int size){
        for(int i = 0; i < size; i++){
            insertAtLast(arr[i]);
        }
        return;
    }
};

int main(){
    DoublyLinkedList dll;
    dll.insertAtFirst(1);
    dll.insert(69,20);
    dll.insertAtLast(4);
    dll.insert(453,2);
    dll.insert(99,7);
    int arr[] = {900,800,700};
    int size = sizeof(arr) / sizeof(int);
    dll.insertArray(arr, size);
    dll.print();    
    return 0;
}