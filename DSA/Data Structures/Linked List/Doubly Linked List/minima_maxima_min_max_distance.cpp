#include<iostream>
#include<limits.h>
#include<vector>
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

bool isCritical(Node* ptr){
    if(ptr == NULL || ptr->next == NULL || ptr->prev == NULL){
        return false;
    }
    int curr = ptr->data;
    int prev = ptr->prev->data;
    int nxt = ptr->next->data;
    if((curr < prev && curr < nxt) || (curr > prev && curr > nxt)){
        return true;
    }
    return false;
}

vector<int> minimaMaximaMinMaxDistance(DoublyLinkedList &dll){
    Node* ptr = dll.head->next;
    int idx = 1;
    int prev = 0;
    int first = 0;
    int last = 0;
    int minDistance = INT_MAX;

    while(ptr->next != NULL){
        if(isCritical(ptr)){
            if(!first) first = idx;
            if(prev) minDistance = min(minDistance, idx - prev);
            prev = idx;
        }
        ptr = ptr->next;
        idx++;
    }
    int maxDistance = prev - first;
    if(maxDistance == 0 || minDistance == INT_MAX){
        minDistance = maxDistance = -1;
    }
    vector<int> arr = {minDistance, maxDistance};
    return arr;
}



int main(){

    DoublyLinkedList dll;
    int arr[] = {1,2,3,5,2,4};
    int size = sizeof(arr) / sizeof(int);

    dll.insertArray(arr, size);
    dll.print();
    vector<int> v = minimaMaximaMinMaxDistance(dll);
    cout<<v[0]<<" "<<v[1]<<endl;
    

    return 0;
}