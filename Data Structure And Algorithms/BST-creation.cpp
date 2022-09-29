#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left =NULL;
        this->right =NULL;
    }
};

node* buildTree(node* root,int data)
{
    if(root==NULL)
    {
        node* temp = new node(data);
        return temp;
    }
    // node* temp = new node(data);
    if(data<root->data)
        root->left =buildTree(root->left,data);
    else
        root->right =buildTree(root->right,data);

    return root;
}

void createBST(node* &root)
{
    int data;
    cout<<"Enter the value for Root node:"<<endl;
    cin>>data;

    while (data!=-1)
    {
        root=buildTree(root,data);
        cout<<"Enter the data for node:"<<endl;
        cin>>data;
    }
}

void preOrder(node* &root)
{
    // Preorder traversal follows NLR(Node-Left-Right) approach 

    // Base Case
    if(root==NULL)
        return;

    // N
    cout<<root->data<<" ";
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

void inOrder(node* &root)
{
    // Inorder traversal follows LNR(Left-Node-Right) approach 

    // Base Case
    if(root==NULL)
        return;

    // L
    inOrder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inOrder(root->right);
}

void postOrder(node* &root)
{
    // Postorder traversal follows LRN(Left-Right-Node) approach 

    // Base Case
    if(root==NULL)
        return;

    // L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout<<root->data<<" ";
}

void lvlOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    // change no.1
    node* seperator= NULL;
    q.push(seperator);

    while (!q.empty())
    {
        // Tu Nikal
        node* front = q.front();
        q.pop();
        
        // change no.2
        if(front==NULL)
        {
            cout<<endl;
            // idhar h ek catch jo dhyan dena h (child nodes ke level ko bhi check krna h)
            if(!q.empty()) // still elements are present
                q.push(seperator);
        }
        else
        {    
            cout<<front->data<<" ";
        
            // Or bacche chor jaana
            if(front->left!=NULL)
                q.push(front->left);
            if(front->right!=NULL)
                q.push(front->right);
        }
        
    }
}

bool searchNode(node* root,int target)
{
    if (root==NULL)
        return false;
    if(target==root->data)
        return true;

    if (target<root->data)
        return searchNode(root->left, target);
    else 
        return searchNode(root->right, target);
}

node* findPred(node* root)
{
    node* pred = root;
    while (pred->right!=NULL)
    {
        pred=pred->right;
    }
    return pred;
}

node* deleteNode(node* &root,int target)
{
    if(root==NULL)
        return NULL;

    if(root->data==target)
    {
        // 0 child waala case
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child waala case
        if(root->left!=NULL && root->right==NULL)
        {
            node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            node* temp=root->right;
            delete root;
            return temp;
        }
        // 2 child waala case
        if(root->left!=NULL && root->right!=NULL)
        {
            // Pehle inorder predecessor nikala
            int pred=findPred(root->left)->data;
            // fir target node par copy krwadiya
            root->data=pred;
            //fir pred ko delete kra diya
            root->left=deleteNode(root->left,pred);
            return root;
        }
    }
    else if(target>root->data)
        root->right=deleteNode(root->right,target);
    else
        root->left=deleteNode(root->left,target);
        
    return root;
}

int main()
{
    node* root =NULL;
    createBST(root);
    
    // cout<<"Printing using Pre-order Traversal:"<<endl;
    // preOrder(root);
    // cout<<endl;

    // cout<<"Printing using In-order Traversal:"<<endl;
    // inOrder(root);
    // cout<<endl;

    // cout<<"Printing using Post-order Traversal:"<<endl;
    // postOrder(root);
    // cout<<endl;

    // cout<<"Printing using Level-order Traversal:"<<endl;
    // lvlOrderTraversal(root);
    // cout<<endl;

    // int target;
    // cout<<"Enter value to be Searched:"<<endl;
    // cin>>target;
    // if(searchNode(root,target))
    //     cout<<"Found!"<<endl;
    // else
    //     cout<<"Not found!"<<endl;

    cout<<"Printing using Level-order Traversal:"<<endl;
    lvlOrderTraversal(root);
    cout<<endl;

    int target;
    cout<<"Enter value to be deleted:"<<endl;
    cin>>target;
    root=deleteNode(root,target);

    cout<<"Printing after Deletion:"<<endl;
    lvlOrderTraversal(root);
    cout<<endl;

    return 0;
} 