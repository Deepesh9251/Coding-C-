#include<iostream>
using namespace std;
//* my first thought was to just swap head and tail pointer.🙂

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

    void print(){
        if(head == NULL){
            cout<<"NULL"<<endl;
            return;
        }
        Node* ptr = head;
        cout<<"NULL <- "; 
        while(ptr->next != NULL){
            cout<<ptr->data<<" <=> ";
            ptr = ptr->next;
        } cout<<ptr->data<<" -> NULL"<<endl;
    }

    void insertAtLast(int val){
        if(tail == NULL){
            head = new Node(val);
            tail = head;
            return;
        }
        Node* newNode = new Node(val);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    }

    void insertArray(int* arr, int size){
        for(int i = 0; i < size; i++){
            insertAtLast(arr[i]);
        }
        return;
    }
};

void reverseIterative(DoublyLinkedList &dll ){
    if(dll.head == NULL || (dll.head)->next == NULL) return;
    Node* ptr = dll.head;
    while(ptr != NULL){
        Node* temp = ptr->next;
        ptr->next = ptr->prev;
        ptr->prev = temp;
        ptr = ptr->prev;
    }
    Node* temp = dll.head;
    dll.head = dll.tail;
    dll.tail = dll.head;
    return;
}



int main(){
    DoublyLinkedList dll;
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    dll.insertArray(arr,size);
    reverseIterative(dll);
    dll.print();
    
    return 0; 
}