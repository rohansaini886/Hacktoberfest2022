#include<bits/stdc++.h>
using namespace std;

// struct node {
//     int data;
//     struct node *left,*right;

//     node(int val){
//         data = val;
//         left=right=NULL;
//     }
// };

class node {
    public:
    int data;
     node *left,*right;

    node(int val){
        data = val;
        left=right=NULL;
    }
};

void preorder(node *root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node *root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
    node *root;
    root = new node(1);
    root->left = new node(4);
    root->right= new node(6);
    root->left->left=new node(8);
    root->left->right = new node(7);
    root->left->right->left=new node(3);
    root->right->left=new node(9);
    root->right->right=new node(10);
    root->right->right->left=new node(11);
    root->right->right->right=new node(12);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}