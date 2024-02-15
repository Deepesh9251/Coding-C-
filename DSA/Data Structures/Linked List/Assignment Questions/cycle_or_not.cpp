//Q. Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null. e.g 1->2->3->4->5->6->7->8->9->10->4(repeat)->5->6->7->8->9->10->4(repeat). returm ptr which point to 4.


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

    int size(){
        int count = 0;
        Node* ptr = head;
        while(ptr != NULL){
            count++;
            ptr = ptr->next;
        }
        return count;
    }
};

Node* isCyclic(LinkedList &l){
    Node* head = l.head;
    Node* fast = l.head;
    Node* slow = l.head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            slow = head;
            while(fast != slow){
                fast = fast->next;
                slow = slow->next;
            }
            return fast;
        }
    }
    return NULL;

}

int main(){
    LinkedList ll;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(int);

    ll.insertArray(arr,size);
    Node* tail = ll.head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* ptr = ll.head;
    while(ptr->data != 9){
        ptr = ptr->next;
    }
    tail->next = NULL;

    ptr = isCyclic(ll);
    cout<<(ptr ? ptr->data : "NULL");
    // ll.print();

    return 0;
}