// Title:  Create binary tree and perform recursive and non-recursive traversals   

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

stack<node *> s,s1;

node *createnode(int ele)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void non_rec_preorder(node *root)
{
    node *ptr;
    ptr = new node();
    ptr = root;
    s.push(ptr);
    while (!s.empty())
    {
        ptr = s.top();
        s.pop();
        if (ptr != NULL)
        {
            cout << ptr->data << " ";
            s.push(ptr->right);
            s.push(ptr->left);
        }
    }
}

void non_rec_inorder(node *root){
    node *ptr;
    ptr = new node();
    ptr = root;
    while(!s.empty() || ptr != NULL){
        if(ptr != NULL){
            s.push(ptr);
            ptr = ptr->left;
        }
        else{
            ptr = s.top();
            s.pop();
            cout << ptr->data  << " ";
            ptr = ptr->right;           
        }
    }
}

void non_rec_postorder(node *root){
    node *ptr;
    ptr = new node();
    ptr = root;
    s.push(ptr);
    while(!s.empty() ){
        ptr = s.top();
        s.pop();
        if(ptr != NULL){
            s1.push(ptr);
        }
        if(ptr->left != NULL)
        s.push(ptr->left);
        if(ptr->right != NULL)
        s.push(ptr->right);
    }

    while(!s1.empty()){
        cout << s1.top()->data << " ";
        s1.pop();
    }
}

int main()
{
    // Creating newnode
    node *p = createnode(1);
    node *p1 = createnode(2);
    node *p2 = createnode(3);
    node *p3 = createnode(4);
    node *p4 = createnode(5);
    node *p5 = createnode(6);
    node *p6 = createnode(7);

    // linking nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    while (1)
    {
        int ch;
        cout << "\n-----------Menu-----------" << endl;
        cout << "1.Preorder(Recursive)" << endl;
        cout << "2.Inorder(Recursive)" << endl;
        cout << "3.Postorder(Recursive)" << endl;
        cout << "4.Preorder(Non-Recursive)" << endl;
        cout << "5.Inorder(Non-Recursive)" << endl;
        cout << "6.Postorder(Non-Recursive)" << endl;
        cout << "0.Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Preorder Traversal(Recursive) : ";
            preorder(p);
            cout << endl;
            break;
        case 2:
            cout << "Inorder Traversal(Recursive) : ";
            inorder(p);
            cout << endl;
            break;

        case 3:
            cout << "Postorder  Traversal(Non-Recursive) : ";
            postorder(p);
            cout << endl;
            break;

        case 4:
            cout << "Preorder Traversal(Non-Recursive) : ";
            non_rec_preorder(p);
            cout << endl;
            break;

        case 5:
        cout << "Inorder Traversal(Non-Recursive) : ";
        non_rec_inorder(p);
        cout << endl;
        break;

        case 6:
        cout << "Postorder Traversal (Non-Recursive) : ";
        non_rec_postorder(p);
        cout << endl;
        break;

        case 0:
            exit(0);
            break;
        }
    }
}
