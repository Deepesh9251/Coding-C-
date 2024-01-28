#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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

bool isPallindrome(DoublyLinkedList &dll ){
    if(dll.head == NULL) cout<<"Empty List"<<endl;
    Node* head = dll.head;
    Node* tail = dll.tail;
    while(head!=tail && head != tail->next){
        if(head->data != tail->data) return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main(){
    DoublyLinkedList dll;
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    dll.insertArray(arr,size);
    cout<<(isPallindrome(dll) ? "YES" : "NO");
    // dll.print();
    return 0;
}