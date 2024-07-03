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
    void sort(){
        Node* j = head->next;
        while(j != NULL){
            Node* i = head; 
            Node* curr = j;
            while(i != NULL){
                if(i->data > curr->data){

                }
            }
        }

    }
};

int main(){
    LinkedList ll;
    int arr[] = {-3,-2,-1,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(int);

    ll.insertArray(arr,size);
    ll.sort();
    ll.print();

    return 0;
}