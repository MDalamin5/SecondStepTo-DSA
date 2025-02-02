#include<queue>
#include<iostream>
using namespace std;
class node {
public:
    int value;
    node *left;
    node *right;

    node(int data){
        this->value = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BST {
public:
    node *root;
    BST(){
        root = nullptr;
    }

    void bfs_traversal(){
        cout<<"Call"<<endl;
        queue<node*> q;
        q.push(root);

        while(!q.empty()){
            int l = -1, r = -1;

            node *a = q.front();
            q.pop();
            if(a->left != nullptr){
                l = a->left->value;
                q.push(a->left);
            }
            if(a->right != nullptr){
                r = a->right->value;
                q.push(a->right);
            }

            cout<<"Node of the value is: "<<a->value<<" "<<"Left child: "<<l<<" "<<"Right child: "<<r<<endl;
        }
    }

    void BST_insaration(int data){
        // cout<<"callll";
        node *newNode = new node(data);
        if(root == nullptr){
            root = newNode;
            return;
        }
        node *curr = root;
        node *par = nullptr;

        while(curr != nullptr){
            if(newNode->value > curr->value){
                par = curr;
                curr = curr->right;
            }
            else{
                par = curr;
                curr = curr->left;
            }
        }
        if(newNode->value > par->value)
            par->right = newNode;
        else
            par->left = newNode;
    }

    bool search(int value){
        node *current = root;
        while(current != nullptr){
            if(value > current->value){
                current = current->right;
            }
            else if(value < current->value){
                current = current->left;
            }
            else
                return true;
        }
        if(current == nullptr)
            return false;
    }
};

int main(){
    BST bst;
    bst.BST_insaration(6);
    bst.BST_insaration(4);
    bst.BST_insaration(3);
    bst.BST_insaration(5);
    bst.BST_insaration(7);
    bst.BST_insaration(8);

    // bst.bfs_traversal();
    cout<<bst.search(7)<<endl;
    cout<<bst.search(100);
}