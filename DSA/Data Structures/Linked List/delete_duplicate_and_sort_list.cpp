#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
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

void sortLinkedList(LinkedList &ll){

    if(ll.head == NULL || ll.head -> next == NULL) return;    //* If the list has one or zero elements

    Node* ptr1 = ll.head;
    while(ptr1 -> next != NULL){
        Node* ptr2 = ll.head;
        while(ptr2 -> next != NULL){
            int* ele1 = &(ptr2 ->data);
            int* ele2 = &(ptr2 -> next -> data);
            if(*ele1 > *ele2){
                int temp = *ele1;
                *ele1 = *ele2;
                *ele2 = temp;
            }
            ptr2 = ptr2 -> next;
        }
        ptr1 = ptr1 -> next;
    }
}

void deleteDuplicate(LinkedList &ll){
    Node* ptr = ll.head;
    while(ptr->next != NULL){
        if(ptr->data == ptr->next->data){
            Node* temp = ptr -> next;
            ptr->next = temp->next;
            delete(temp);
        }
        else{
            ptr = ptr -> next;
        }
    }
}


int main(){
    int arr[] = {9,8,7,6,4,9,3,3};
    int size = sizeof(arr) / sizeof(int);

    Node* head = NULL;
    LinkedList ll(head);
    ll.insertArray(arr,size);
    sortLinkedList(ll);
    deleteDuplicate(ll);
    ll.print();

    
    return 0;
}