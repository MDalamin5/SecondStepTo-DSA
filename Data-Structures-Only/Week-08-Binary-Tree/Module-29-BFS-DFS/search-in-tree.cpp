#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int id, value;
    node *left;
    node *right;
    node *parent;

    // create a new node
    node(int id, int value){
        this->id = id;
        this->value = value;
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

    void insertion(int id, int value){
        node *newNode = new node(id, value);

        if(root == nullptr){
            root = newNode;
            return;
        }

        queue<node*> q;
        q.push(root);

        while(!q.empty()){
            node *a = q.front();
            q.pop();

            if(a->left==nullptr){
                a->left = newNode;
                newNode->parent = a;
                return;
            }
            else{
                q.push(a->left);
            }

            if(a->right == nullptr){
                a->right = newNode;
                newNode->parent = a;
                return;
            }
            else{
                q.push(a->right);
            }
        }
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

    void serchOnTree(node *a, int value){
        if(a==nullptr)
            return;
        
        if(a->value == value)
            cout<<a->id<<" "<<endl;
        serchOnTree(a->left, value);
        serchOnTree(a->right, value);
    }

};

int main(){
    BinaryTree bt;
    bt.insertion(0, 11);
    bt.insertion(1, 22);
    bt.insertion(2, 33);
    bt.insertion(3, 11);
    bt.insertion(4, 55);
    bt.insertion(5, 66);
    bt.DFS_inorder(bt.root);
    cout<<endl;
    bt.DFS_preorder(bt.root);
    cout<<endl;
    bt.DFS_postorder(bt.root);
    cout<<endl;
    bt.serchOnTree(bt.root, 11);
}