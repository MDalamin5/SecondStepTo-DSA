#include<iostream>
#include <cassert>
using namespace std;

template <class T>
class node {
public:
    T data;
    node* next;
    node(T value){
        this->data = value;
        this->next = NULL;
    }
};

template <class T>
class myLinkedList {
public:
    node<T> *head;
    int sizeOfLinkedList;
    myLinkedList(){
        head = NULL;
        sizeOfLinkedList = 0;
    }

    void insertAtHead(T value){
        node<T> *newNode = new node<T>(value);
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
        node<T> *temp_head = head;
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
        node<T> *temp = head;
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
            
        
    }
};

template <class T>
class ll_Stack {
public:
    myLinkedList<T> ll;
    ll_Stack(){

    }
    void push(T value){
        ll.insertAtHead(value);
    }
    void pop(){
        ll.eraseFromHead();
    }
    T top(){
        if(ll.head != nullptr)
            return ll.head->data;
        else
            throw runtime_error("Oops!! Your stack is empty!");
    }
};

int main(){
    ll_Stack<int> st;
    for(int i=1; i<=5; i++)
        st.push(i*10);
    st.ll.Display(); // to see the stack

    // Reverse this stack
    ll_Stack<int> temp;
    for(int i=0; i<5; i++){
        temp.push(st.top());
        st.pop();
    }
    temp.ll.Display();
    swap(temp, st); // st point to temp stack
    st.ll.Display();
}