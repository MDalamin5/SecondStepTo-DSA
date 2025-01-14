#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *prev;
    node *next;

    node(int data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class myDoublyLinkedList {
public:
    node *head;
    int sizeOfDoublyLinkedList;

    myDoublyLinkedList(){
        head = nullptr;
        this->sizeOfDoublyLinkedList = 0;
    }


    void insertAtHead(int value){
        node* newNode = new node(value);
        if(head == nullptr){
            head = newNode;
            sizeOfDoublyLinkedList++;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            sizeOfDoublyLinkedList++;
        }
            
    }

    void display(){
        node *tempNode = head;
        while (tempNode != nullptr)
        {
            cout<<tempNode->data<<" ";
            tempNode = tempNode->next;
        }
        cout<<endl;
    }
};

int main(){
    myDoublyLinkedList dll;
    dll.insertAtHead(10);
    dll.insertAtHead(20);
    dll.insertAtHead(30);
    dll.insertAtHead(40);
    dll.display();
}