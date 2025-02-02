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

    void BFS(){
        queue<node*> q;
        q.push(root);

        while(!q.empty()){
            node *a = q.front();
            q.pop();

            int p = -1, l = -1, r = -1;
            
            if(a->left != nullptr){
                l = a->left->id;
                q.push(a->left);
            }
            if(a->right != nullptr){
                r = a->right->id;
                q.push(a->right);
            }
            if(a->parent != nullptr){
                p = a->parent->id;
            }

            cout<<"Node id->"<<a->id<<" Left child: "<<l<<" Right child: "<<r<<" Parent: "<<p<<endl;
        }
    }

    void DFS(node *a){
        if(a == nullptr)
            return;
        
        cout<<a->id<<" ";
        DFS(a->left);
        DFS(a->right);
    }

};

int main(){
    BinaryTree bt;
    bt.buildBinaryTree();
    // bt.BFS();
    bt.DFS(bt.root);
}