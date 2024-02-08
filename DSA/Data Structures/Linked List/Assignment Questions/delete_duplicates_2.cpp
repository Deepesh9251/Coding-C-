// Q. a sorted linked list is given. delete all the values which are duplicate and leave only distinct elements. e.g. {1,2,3,3,4,4,5} => {1,2,5};

#include <iostream>
#include <limits.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insertAtLast(int val)
    {
        if (head == NULL)
        {
            head = new Node(val);
            return;
        }
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new Node(val);
    }

    void insertArray(int *arr, int &size)
    {
        for (int i = 0; i < size; i++)
        {
            insertAtLast(arr[i]);
        }
    }

    void print()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};

void deleteAllDuplicates(LinkedList &l){
    Node* head = l.head;
    Node* ptr = head;
    Node* prev = NULL;
    while(ptr!=NULL && ptr->next!=NULL){
        if(ptr->next->data == ptr->data){
            Node* temp = ptr->next;
            while(temp != NULL && temp->data == ptr->data){
                Node* temp2 = temp;
                ptr->next = temp->next;
                temp = temp->next;
                delete(temp2);
            }
            if(prev == NULL){  //# if prev is null, which means head node is duplicate and deleting head node will be different.
                delete(ptr);
                ptr = temp;
                l.head = ptr;
                continue;
            }
            prev->next = temp;
            temp = ptr;
            delete(temp);
            ptr = prev->next;
        }
        else{
            prev = ptr;
            ptr = ptr->next;
        }
    }
}

int main()
{
    LinkedList ll;
    int arr[] = {-2,4,5,6,7,7,7};
    int size = sizeof(arr) / sizeof(int);

    ll.insertArray(arr, size);
    deleteAllDuplicates(ll);
    ll.print();
    return 0;
}