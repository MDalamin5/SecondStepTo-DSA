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

    void insertAtAnyIndex(int value, int idx){
        if(idx > sizeOfLinkedList){
            cout<<"Invalid Index"<<endl;
            return;
        }
            
        if(idx == 0)
            insertAtHead(value);
            return;
        
        node* newNode = new node(value);
        int temp_index = 0;
        node* temp_head = head;
        while (temp_index < idx-1)
        {
            temp_head = temp_head->next;
            temp_index++;
            cout<<"Test line"<<endl;
        }
        cout<<newNode->data<<" "<<temp_head->next<<endl;
        
        newNode->next = temp_head->next;
        temp_head->next = newNode;
        sizeOfLinkedList++;
        
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
    ll.insertAtAnyIndex(33, 1);
    // cout<<ll.getLinkedListSize();
    ll.Display();
}