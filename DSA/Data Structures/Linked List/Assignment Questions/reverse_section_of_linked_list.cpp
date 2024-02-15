//Q. given a linked list and two integers left and right such that left<=right. we have to revese the node from left to right and return the reversed list. e.g. 1->2->3->4->5->6->NULL, left = 2 and right = 5. ans: 1->5->4->3->2->6->NULL. NOTE: 1-based indexing is used for left and right intergers.

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

void reversePortion(LinkedList &l, int &left, int &right){
    if(l.head == NULL || l.head->next == NULL || left >= right) return; //# Edge cases
    left = max(1,left);  
    Node* head = l.head;
    Node* ptr = head;
    Node* prev = NULL;
    Node* nxt = ptr->next;
    int count = 1;
    while(count != left){  //# take ptr to the portion of the list which is to be reversed
        count++;
        prev = ptr;
        ptr = ptr->next;
        nxt = ptr->next;
    }
    Node* last_of_first_portion = prev;
    Node* first_of_mid_portion = ptr;
    while(count != right+1 && ptr != NULL){
        ptr->next = prev;
        prev = ptr;
        ptr = nxt;
        if(nxt!=NULL) nxt = ptr->next;
        count++;
    }
    // Node* last_of_mid_portion = prev;
    // Node* first_of_last_portion = ptr;
    if(left <= 1){
        l.head = prev;
    }else last_of_first_portion->next = prev;
    first_of_mid_portion->next = ptr;

    return;
}


int main(){
    LinkedList ll;
    int arr[] = {1,2,3};
    int size = sizeof(arr) /sizeof(int);

    ll.insertArray(arr,size);
    int left = 2, right = 3;

    reversePortion(ll, left, right);
    ll.print();


    return 0;
}