#include <iostream>
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

    void reverse(){
        if(head == NULL){
            return;
        }
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt = head->next;
        while(curr->next != NULL){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = curr->next;
        }
        curr->next = prev;
        head = curr;
    }

};

Node* reverseRecursive(Node* &head){

    if(head == NULL || head ->next == NULL){
        return head;
    }
    Node* newHead = reverseRecursive(head->next);
    head -> next -> next = head;
    head ->next = NULL;
    return newHead;
}

int main(){
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    LinkedList ll;
    ll.insertArray(arr,size);
    ll.head = reverseRecursive(ll.head);
    ll.print();
    
    return 0;
}