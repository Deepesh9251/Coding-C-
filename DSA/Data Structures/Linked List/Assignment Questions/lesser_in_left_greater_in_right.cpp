//Q. given a linked list and a value x (may not be element of the linked list). put all the elements less than or equal to x in left and all the greater elements in right. the relative order should be maintained in both partitions or portions.

#include <iostream>
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
    LinkedList(){
        head = NULL;
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
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
Node* partition(Node* &head , int &x){
    if(head->next == NULL) return head;
    Node* newHead = partition(head->next, x);
    Node* ptr = head;
    if(ptr->data > x && newHead->data <= x){
        Node* temp = newHead;
        while(temp != NULL && temp->data <= x){
            swap(&(ptr->data), &(temp->data));
            ptr = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    LinkedList ll;
    int arr[] = {1,5,3,10};
    int size = sizeof(arr) / sizeof(int);
    ll.insertArray(arr,size);
    int x = 4;
    ll.head = partition(ll.head, x);
    ll.print();
    return 0;
}