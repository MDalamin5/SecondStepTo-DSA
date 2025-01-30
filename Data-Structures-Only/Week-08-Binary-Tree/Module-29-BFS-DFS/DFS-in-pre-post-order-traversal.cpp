#include<iostream>
#include<queue>
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
        allNode[1]->left = allNode[3];
        allNode[1]->right = allNode[4];

        allNode[2]->parent = allNode[0];
        allNode[2]->left = allNode[5];

        allNode[5]->parent = allNode[2];

        allNode[3]->parent = allNode[1];
        allNode[4]->parent = allNode[1];

        root = allNode[0];
    }

    void DFS_inorder(node *a){
        if(a == nullptr)
            return;
        
        DFS_inorder(a->left);
        cout<<a->id<<" ";
        DFS_inorder(a->right);
    }

    void DFS_preorder(node *a){
        if(a == nullptr)
            return;
        
        cout<<a->id<<" ";
        DFS_preorder(a->left);
        DFS_preorder(a->right);
    }

    void DFS_postorder(node *a){
        if(a == nullptr)
            return;
        
        
        DFS_postorder(a->left);
        DFS_postorder(a->right);
        cout<<a->id<<" ";
    }

};

int main(){
    BinaryTree bt;
    bt.buildBinaryTree();
    bt.DFS_inorder(bt.root);
    cout<<endl;
    bt.DFS_preorder(bt.root);
    cout<<endl;
    bt.DFS_postorder(bt.root);
}