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

    void eraseFromHead(){
        if(head==NULL){
            cout<<"Your List is Empty"<<endl;
            return;
        }
        node* tempNode = head;
        head = tempNode->next;
        head->prev = nullptr;
        delete tempNode;
        sizeOfDoublyLinkedList--;
        cout<<"Delete successfully Done!"<<endl;
    }

    void eraseFromAnyPosition(int position){
        if(position>=sizeOfDoublyLinkedList || head == NULL){
            cout<<"Invalid Index"<<endl;
            return;
        }
        node* currentNode = head;
        int counter = 0;
        while (counter < position-1){
            currentNode = currentNode->next;
            counter++;
        }
        // cout<<"i'm here"<<endl;
        node* deleteNode = currentNode->next;
        currentNode->next = deleteNode->next;
        deleteNode->next->prev = currentNode;
        delete deleteNode;
        sizeOfDoublyLinkedList--;
        
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
    // dll.eraseFromHead();
    dll.eraseFromAnyPosition(2);
    dll.display();
}