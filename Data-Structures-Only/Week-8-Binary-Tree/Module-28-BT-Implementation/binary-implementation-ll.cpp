#include<iostream>
using namespace std;

class node{
public:
    int id;
    node *left;
    node *right;
    node *parent;

    // create a new node
    node(int id){
        this->id = id;
        this->left = nullptr;
        this->right = nullptr;
        this->parent = nullptr;
    }
};

class BinaryTree {
public:
    node *root;
    node *allNode[6];
    BinaryTree(){
        root = nullptr;
        // node *allNode[6];
    }

    void buildBinaryTree(){
        
        for(int i = 0; i<6; i++)
            allNode[i] = new node(i);
        
        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->parent = allNode[0];
        allNode[1]->left = allNode[5];

        allNode[2]->parent = allNode[0];
        allNode[2]->left = allNode[3];
        allNode[2]->right = allNode[4];

        allNode[5]->parent = allNode[1];

        allNode[3]->parent = allNode[2];
        allNode[4]->parent = allNode[2];
    }

    void DisplayBT(){
        

        for(int i=0; i<6; i++){
            int l = -1;
            int r = -1;
            int p = -1;
            
            if(allNode[i]->parent != nullptr)
                p = allNode[i]->parent->id;
            if(allNode[i]->left != nullptr)
                l = allNode[i]->left->id;
            if(allNode[i]->right != nullptr)
                r = allNode[i]->right->id;

            cout<<"Node: "<<i<<" --> Parent: "<<p<<" left child: "<<l<<" right child: "<<r<<endl;
        }
    }
};

int main(){
    BinaryTree bt;
    bt.buildBinaryTree();
    bt.DisplayBT();
}