//Q. two linked lists are given. each stores the digits of two integers in reverse order. add both the numbers represented by those two linked lists and store the number in same fashion in first linked list.


#include <iostream>
#include <math.h>
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

void add(LinkedList &l1, LinkedList &l2){
    //# pointers to traverse the lists
    Node* ptr1 = l1.head;
    Node* ptr2 = l2.head;
    
    //# variables to easily implement the logic
    int dig1 = 0;
    int dig2 = 0;
    int digitSum = dig1 + dig2;
    int ansDig = digitSum % 10;
    int carry = digitSum / 10;


    //# main logic
    while(ptr1 != NULL || ptr2 != NULL){
        dig1 = ((ptr1 != NULL) ? ptr1->data : 0);
        dig2 = ((ptr2 != NULL) ? ptr2->data : 0);

        digitSum = dig1 + dig2 + carry;
        ansDig = digitSum % 10; 
        carry = digitSum / 10;

        if(ptr1 != NULL) ptr1->data = ansDig;
        else l1.insertAtLast(ansDig);

        if(ptr1 != NULL) ptr1 = ptr1->next;
        if(ptr2 != NULL) ptr2 = ptr2->next;
    }
    cout<<"At last carry = "<<carry<<endl;
    // if(carry) l1.insertAtLast(carry);
    return;
}

int main(){
    LinkedList l1;
    LinkedList l2;

    int n, m;
    cin>>n>>m;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        l1.insertAtLast(x%10);
    }
    for(int i = 0; i < m; i++){
        cin>>x;
        l2.insertAtLast(int(x)%10);
    }

    cout<<"l1 : ";l1.print();
    cout<<"l2 : ";l2.print();
    add(l1, l2);
    cout<<"Sum(l1) : ";l1.print();

    return 0;
}