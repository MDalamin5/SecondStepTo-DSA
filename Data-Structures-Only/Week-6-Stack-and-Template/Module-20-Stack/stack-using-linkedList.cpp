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

class ll_Stack {
public:
    myLinkedList ll;
    ll_Stack(){

    }
    void push(int value){
        ll.insertAtHead(value);
    }
    void pop(){
        ll.eraseFromHead();
    }
    int top(){
        if(ll.head != nullptr)
            return ll.head->data;
        else
            return -1;
    }
};

int main(){
    ll_Stack stk_ll;
    stk_ll.push(1);
    cout<<stk_ll.top()<<endl;
    stk_ll.push(4);
    cout<<stk_ll.top()<<endl;
    stk_ll.push(5);
    cout<<stk_ll.top()<<endl;
    stk_ll.push(2);
    cout<<stk_ll.top()<<endl;
    



}