#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void printLinkedList(Node* head){
    Node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->val<<" -> ";
        ptr = ptr -> next;
    }cout<<"NULL"<<endl;
}

void insertAtFirst(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void deleteHead(Node* &head){
    Node* temp = head;
    head  = head->next;
    delete(temp);
    // free(temp);
}

void deleteTail(Node* &head){

    Node* temp = head;
    while((temp->next)->next != NULL){
        temp = temp -> next;
    }
    delete(temp->next);
    temp->next = NULL;
}

void deletePosition(Node* &head, int pos){
    if(pos == 0){
        deleteHead(head);
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

int main(){
    Node* head = NULL;
    insertAtFirst(head, 50);
    insertAtFirst(head, 40);
    insertAtFirst(head, 30);
    insertAtFirst(head, 20);
    insertAtFirst(head, 10);
    insertAtFirst(head, 0);

    printLinkedList(head);

    deleteHead(head);
    printLinkedList(head);

    deleteTail(head);
    printLinkedList(head);
    
    deletePosition(head, 0);
    printLinkedList(head);
    return 0;
}