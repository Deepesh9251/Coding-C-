#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        next = NULL;
        this->data = data;
    }
};

class CircularLinkedList{
public:
    Node* head;
    CircularLinkedList(){
        head = NULL;
    }
    void insertAtFirst(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            head->next = head;
            return;
        }
        Node* tail = head;
        do{
            tail = tail->next;
        } while(tail->next != head);
        tail->next = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }

    void insertAtLast(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            head->next = head;
            return;
        }

        Node* tail = head;
        do{
            tail = tail->next;
        } while(tail->next != head);
        tail->next = newNode;
        newNode->next = head;
        return;
    }

    void insert(int val, int k){ //* 0 based indexing
        if(k==0){
            insertAtFirst(val);
            return;
        }
        if(k < 0 || head == NULL){
            cout<<"Invalid Position: either the list is empty or the position is given is negative.\n";
            return;
        }
        Node* newNode = new Node(val);
        Node* ptr = head;
        k--;
        while(k-- > 0){
            ptr = ptr->next;
            if(ptr == head){
                cout<<"Invalid Position: the position is larger than the size of the list.\n";
                return;
            }
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
        
    }

    void print(){
        Node* ptr = head;
        if(head == NULL){
            cout<<"NULL"<<endl;
            return;
        }
        cout<<" -> ";
        do{
            cout<<ptr->data<<" -> ";
            ptr = ptr->next;
        }while(ptr != head);
        cout<<endl;
        cout<<"|";
        do{
            cout<<"-"<<"----";
            ptr= ptr->next;
        }while(ptr != head);
        cout<<"--|\n";
        return;
    }

    void deleteHead(){
        if(head==NULL){
            cout<<"The list is empty\n";
            return;
        }
        if(head->next == head){
            Node* temp = head;
            head = NULL;
            delete(temp);
            return;
        }
        Node* temp2 = head;
        Node* tail = head;
        while(tail->next!=head){
            tail = tail->next;
        }
        tail->next = head->next;
        delete(temp2);
        head = tail->next;
    }

    void deleteTail(){
        if(head == NULL){
            cout<<"The list is empty\n";
            return;
        }
        if(head->next == head){
            Node* temp = head;
            head = NULL;
            delete(temp);
            return;
        }
        Node* tail = head;
        while(tail->next->next != head){
            tail = tail->next;
        }
        Node* temp = tail->next;
        tail->next = head;
        delete(temp);
        return;
    }
    void deletePosition(int pos){
        if(head == NULL || pos < 0 || (head->next == head && pos!=0)){
            cout<<"Either the list is empty or the position in invalid\n";
            return;
        }
        if(pos == 0){
            deleteHead();
            return;
        }

        Node* ptr = head;
        pos--;
        while(pos--){
            ptr = ptr->next;
            if(ptr->next == head){
                cout<<"Invalid Position!!!\n";
                return;
            }
        }
        Node* temp = ptr->next;
        ptr->next = temp->next;
        delete(temp);
    }
};

int main(){
    CircularLinkedList cll;
    int arr[] = {4,3,6,7,8,9,0,1};
    int size = sizeof(arr) / sizeof(int);
    for(int i = 0; i < size; i++){
        cll.insertAtLast(arr[i]);
    }
    cll.deletePosition(5);
    cll.print();
    cll.deletePosition(5);
    cll.print();
    cll.deletePosition(5);
    cll.print();
    cll.deletePosition(6);
    cll.print();
    cll.deletePosition(2);
    cll.print();
    cll.deletePosition(2);
    cll.print();
    cll.deletePosition(2);
    cll.print();
    cll.deletePosition(1);
    cll.print();
    cll.deletePosition(0);
    cll.deletePosition(0);
    cll.print();
    
    return 0;
}