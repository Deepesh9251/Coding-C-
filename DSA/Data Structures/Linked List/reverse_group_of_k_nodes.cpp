#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
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
            cout<<ptr->val<<" -> ";
            ptr = ptr -> next;
        } cout<<"NULL"<<endl;
    }
};

Node* reverseNodesGroup(Node* head, int k){
    if(head == NULL || head ->next == NULL){
        return head;
    }

    Node* curr = head;
    Node* nxt = curr->next;
    Node* prev = NULL;
    int i = 0;

    while(curr != NULL && i < k){
        curr->next = prev;
        prev = curr;
        curr = nxt;
        if(nxt!=NULL) nxt = curr->next;
        i++;
    }
    

    Node* secondHead = reverseNodesGroup(curr, k);
    head->next = secondHead;
    head = prev;
    return head;
}

int main(){
    int arr[] = {1,2,33,1,4};
    int size = sizeof(arr) / sizeof(int);

    LinkedList ll;  
    ll.insertArray(arr,size);
    ll.head = reverseNodesGroup(ll.head,3);
    ll.print();
    return 0;
}