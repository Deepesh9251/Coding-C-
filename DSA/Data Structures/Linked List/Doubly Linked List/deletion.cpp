#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = next = NULL;
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

    void deleteHead(){
        if(head == NULL){
            return;
        }
        if(head->next == NULL){
            Node* temp = head;
            tail = head = NULL;
            delete(temp);
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete(temp);
        return;
    }
    
    void deleteTail(){
        if(tail == NULL){
            return;
        }
        if(tail->prev == NULL){
            Node* temp = tail;
            head = tail = NULL;
            delete(temp);
            return;
        }
        Node* temp = tail;
        tail = tail -> prev;
        tail->next = NULL;
        delete(temp);
        return;
    }

    void deletePosition(int pos){ //* 0-based indexing
        if(head==NULL || pos < 0){
            cout<<"Invalid Position!!!"<<endl;
            return;
        }
        if(pos == 0){
            deleteHead();
            return;
        }
        Node* ptr = head;
        while(pos--){
            ptr = ptr -> next;
            if(ptr == NULL){
                cout<<"Invalid Position!!!"<<endl;
                return;
            }
        }
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        delete(ptr);
    }
};

int main(){

    DoublyLinkedList dll;
    int arr[] = {0,1,2};
    int size = sizeof(arr) / sizeof(int);

    dll.insertArray(arr,size);
    dll.deleteHead();
    dll.deleteTail();
    dll.deletePosition(2);
    dll.deletePosition(2);
    dll.deletePosition(2);
    dll.deletePosition(2);
    dll.deletePosition(2);
    dll.print();

    return 0;
}