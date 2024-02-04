#include<iostream>
using namespace std;

template<typename T>

class Node{
public:
    T data;
    Node* next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};

int main(){
    Node<int>* head = new Node<int>(69);
    Node<int>* tail = new Node<int>(70); 
    head->next = tail;
    cout<<head->data<<"->"<<tail->data<<"->NULL"<<endl;

    Node<char>* head2 = new Node<char>(69);
    Node<char>* tail2 = new Node<char>(76); 
    head2->next = tail2;
    cout<<head2->data<<"->"<<tail2->data<<"->NULL"<<endl;
    
    return 0;
}