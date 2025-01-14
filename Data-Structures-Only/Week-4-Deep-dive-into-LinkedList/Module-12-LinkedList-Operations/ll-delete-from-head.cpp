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

    void eraseFromHead(){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
            return;
        }
        node* temp_head = head;
        head = temp_head->next;
        sizeOfLinkedList--;
        delete temp_head;

    }

    int getLinkedListSize(){
        return sizeOfLinkedList;
    }

    void Display(){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        node* temp = head;
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
            
        
    }
};

int main(){
    myLinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(30);
    ll.insertAtHead(40);
    ll.insertAtHead(50);
    
    cout<<"Before Deleting"<<endl;
    ll.Display();
    ll.eraseFromHead();
    cout<<"After deleting the head node"<<endl;
    ll.Display();
}