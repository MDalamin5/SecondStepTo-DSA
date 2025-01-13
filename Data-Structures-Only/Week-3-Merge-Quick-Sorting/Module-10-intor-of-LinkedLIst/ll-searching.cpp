// add new value insert at head
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node *head;
    LinkedList(){
        head = NULL;
    }

    void InsertAtHead(int value){
        Node *newNode = new Node(value);
        if(head==NULL){
            head = newNode;
        }
        else{
            newNode->next=head;
            head = newNode;
        }

    }

    int Searching(int value){
        Node* temp = head;
        if(head == NULL){
            cout<<"Linked list is empty"<<endl;
            return -1;
        }
        int value_idx = 0;
        while (temp != NULL)
        {
            if(value == temp->data){
                return value_idx;
            }
            temp = temp->next;
            value_idx++;
        }
        return -1;
    }

    void Display(){
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
            
        
    }

};

int main(){

    LinkedList ll;
    for(int i=1; i<=5; i++)
        ll.InsertAtHead(10*i);

    // ll.Display();
    cout<<ll.Searching(30)<<endl;
}