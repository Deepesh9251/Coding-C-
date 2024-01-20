#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node{
public:
    int val;
    Node* next;
    Node(int val);
};

class LinkedList{
public:
    Node* head;
    LinkedList(Node* head);
    void input(int size = -1);
    void print();
    void insertAtLast(int val);
    void insertAtHead(int val);
    void insert(int val, int pos);
    void insertArray(int* arr, int size);
    void deleteNode(int pos);
    void deleteHead(); 
    void deleteTail();
    void update(int newValue, int pos);
};

#endif