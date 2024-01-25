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

    void insert(int val, int pos){ //* 0-based indexing and pos should be less than the length(i.e. valid position)

        if(pos <= 0){
            if(pos == 0) insertAtFirst(val);
            else cout<<"Invalid Position: "<<pos<<endl;
            return;
        }
        Node* ptr = head;
        bool flag = true;
        int temp = pos;
        while(pos--){
            ptr = ptr -> next;
            if(ptr == NULL){
                cout<<"Invalid Position: "<<temp<<endl;
                flag = false;
                // return;
            }
        }
        if(flag){
            Node* newNode = new Node(val);
            newNode->next = ptr;
            newNode->prev = ptr->prev;
            ptr->prev->next = newNode;
            ptr->prev = newNode;
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
    int arr[] = {0,1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(int);
    dll.insertArray(arr, size);
    dll.insert(10,-1);
    dll.insert(20,0);
    dll.insert(30,9);
    dll.print();    
    dll.insert(40,10);
    dll.insert(50,9);
    dll.print();    
    return 0;
}