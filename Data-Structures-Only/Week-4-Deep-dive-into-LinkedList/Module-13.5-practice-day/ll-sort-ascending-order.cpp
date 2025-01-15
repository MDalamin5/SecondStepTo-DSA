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
    void insertAfterSpecificValue(int value, int speValue){
        node* newNode = new node(value);
        // corner case
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        node* curNode = head;
        while (curNode != NULL)
        {
            if(curNode->data == speValue){
                break;
            }
            curNode = curNode->next;
        }
        // cout<<curNode->data<<endl;
        newNode->next = curNode->next;
        curNode->next = newNode;
        sizeOfLinkedList++;
        
    }

    void linkedListSorting(){
        node* currentNode = head;
        int counter = 0;
        while(counter < sizeOfLinkedList){
            node* tempNode = currentNode->next;
            while(currentNode->next != nullptr){
                if(currentNode->data > tempNode->data){
                    int temp_value = currentNode->data;
                    currentNode->data = tempNode->data;
                    tempNode->data = temp_value;
                }
                currentNode = currentNode->next;
                tempNode = tempNode->next;
            }
            currentNode = head;
            counter++;
        }
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
    void reverseDisplaying(node* startPoint){
        if(startPoint==NULL)
            return;
        else{
            reverseDisplaying(startPoint->next);
            cout<<startPoint->data<<" ";
        }
    }
};

int main(){
    myLinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(30);
    ll.insertAtHead(40);
    ll.insertAtHead(50);
    // ll.reverseDisplaying(ll.head);
    ll.Display();
    ll.linkedListSorting();
    ll.Display();
    
    
}