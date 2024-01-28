#include <iostream>
#include <vector>
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

vector<int> targetSum(DoublyLinkedList &dll, int x){
    Node* ptr1 = dll.head;
    Node* ptr2 = dll.tail;
    
    while(ptr1 != ptr2){
        int a = ptr1->data;
        int b = ptr2->data;
        if(a + b == x){
            return {a,b};
        }else if(a + b > x){
            ptr2 = ptr2->prev;
        }else{
            ptr1 = ptr1->next;
        }
    }

    return {-1,-1};

}

int main(){
    DoublyLinkedList dll;
    int arr[] = {};
    int size = sizeof(arr) / sizeof(int);

    dll.insertArray(arr, size);
    dll.print();
    vector<int> ans = targetSum(dll,12 );
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}