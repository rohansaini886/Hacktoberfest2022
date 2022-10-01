#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node *create_tree(node *&root)
{
    int data;
    cout << "enter value" << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;

    root->left = create_tree(root->left);

    root->right = create_tree(root->right);
    return root;
}

// LEVEL ORDER TRAVERSAL

void level_order_traversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // old level fully traversed
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << " " << temp->data;
            if (temp->left)
            {
                q.push(temp->left);

                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
}
// IN ORDER TFAVERSAL OR    L N R
void in_order(node *root)
{
    // base case

    if (root == NULL)
    {
        return;
    }

    in_order(root->left);      // L
    cout << root->data << " "; // N
    in_order(root->right);     //  R
}

// similarly writing PRE ORDER TRAVERSAL OR N L R

void pre_order(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " "; // N
    pre_order(root->left);     // L
    pre_order(root->right);    //  R
}

// similarly writing POST ORDER TRAVERSAL OR L R N

void post_order(node *root)
{
    if (root == NULL)
    {
        return;
    }

    post_order(root->left);    // L
    post_order(root->right);   //  R
    cout << root->data << " "; // N
}

bool find(node *root, int data)
{
    int temp;
    if (root == NULL)
        return 0;
    else
    {
        if (data == root->data)
            return 1;
        else
        {
            temp = find(root->left, data);
            if (temp != 0)
                return temp;
            else
                return find(root->right, data);
        }
    }
    return 0;
}

// CREATE TREE USING LEVEL ORDER

void create_using_level_order(node *root)
{
    queue<node *> q;
    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter left node for : " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "enter right node for : " << temp->data << endl;

        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    // create_tree(root);

    // level_order_traversal(root);

    // in_order(root);
    // cout << endl;
    // pre_order(root);
    // cout << endl;
    // post_order(root);

    create_using_level_order(root);
}