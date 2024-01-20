#include<iostream> 
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
    LinkedList(Node* head){
        this->head = head;
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

void deleteAlternateElement(LinkedList &ll){
    Node* ptr = ll.head;
    while( ptr != NULL && ptr->next != NULL){
        Node* temp = ptr->next;
        ptr->next = temp->next;
        delete(temp);
        ptr = ptr -> next;
    }
}

int main(){
    Node* head = NULL;
    LinkedList ll(head);
    int arr[] = {92,7,3,77,5,6,3,34,5,6,35,3,34};
    int size = sizeof(arr) / sizeof(int);
    ll.insertArray(arr,size);
    deleteAlternateElement(ll);
    ll.print(); 
    return 0;
}