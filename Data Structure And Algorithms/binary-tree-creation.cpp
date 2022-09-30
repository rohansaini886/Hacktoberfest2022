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
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree()
{
    int data;
    cout<<"Enter value of data: "<<endl;
    cin>>data;

    // Base Case
    if (data==-1)
        return NULL;

    node* newNode = new node(data);
    
    cout<<"Enter value of left child: "<<endl;
    newNode->left=buildTree();
    cout<<"Enter value of right child: "<<endl;
    newNode->right=buildTree();
    
    return newNode;
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

int height(node* root) // count the height through number of edges
{
    // Base Case
    if(root==NULL)
        return 0;

    // Leaf node 
    if (root->left==NULL && root->right==NULL)
        return 0;

    int leftAns=height(root->left);
    int rightAns=height(root->right);

    return 1+max(leftAns,rightAns);
}

int main()
{
    node* root = buildTree();
    node* root = NULL;
    root=buildTree();

    cout<<"Printing using Pre-order Traversal:"<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Printing using In-order Traversal:"<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"Printing using Post-order Traversal:"<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"Printing using Level-order Traversal:"<<endl;
    lvlOrderTraversal(root);
    cout<<endl;

    cout<<"Height of tree:"<<height(root)<<endl;
        
    return 0;
}