#include<queue>
#include<iostream>

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
        this->root = nullptr;
    }

};