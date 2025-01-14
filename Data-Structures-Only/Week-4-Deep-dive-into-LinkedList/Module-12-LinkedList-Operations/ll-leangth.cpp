#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value){
        this->data = value;
        this->next = NULL;
    }
};

class myLinkedList {
public:
    node* head;
    int sizeOfLinkedList;
    myLinkedList(){
        head = NULL;
        sizeOfLinkedList = 0;
    }

    void insertAtHead(int value){
        node* newNode = new node(value);
        if(head == NULL){
           head = newNode;
           sizeOfLinkedList++;

        }
        else{
            newNode->next = head;
            head = newNode;
            sizeOfLinkedList++;
        }
    }

    int getLinkedListSize(){
        return sizeOfLinkedList;
    }
};

int main(){
    myLinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(30);
    cout<<ll.getLinkedListSize();
}