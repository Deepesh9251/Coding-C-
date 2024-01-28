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

void deleteWhenEqualNeighbour(DoublyLinkedList &dll ){
    Node* head = dll.head;
    Node* tail = dll.tail;
    if(head == NULL || head == tail){
        return;
    }
    Node* ptr = tail->prev;
    while(ptr->prev != NULL){
        if(ptr->prev->data == ptr->next->data){
            Node* temp = ptr;
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            delete(temp);
        }else{
            ptr = ptr->prev;
        }
    }
    return;
}

int main(){
    DoublyLinkedList dll;
    int arr[] = {1,1,1};
    int size = sizeof(arr) / sizeof(int);

    dll.insertArray(arr,size);
    dll.print();
    deleteWhenEqualNeighbour(dll);
    dll.print();
    return 0;
}