#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node()
    {
        int value= this->data;
        if (this->next != NULL)
        {
            this->next=NULL;
            delete next;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

int getlength(node *&head)
{
    int cnt=0;
    node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insAtHead(node* &head, node* &tail, int data)
{
    // if list is empty
    if(head==NULL)
    {
        node* newNode = new node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        node *newNode = new node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insAtTail(node* &head, node* &tail, int data)
{
    // if list is empty
    if(tail==NULL)
    {
        node *newNode = new node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        node *newNode = new node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insAtPos(node* &head, node* &tail, int data, int k)
{
    // if k=1, then it will be same as insAtHead function
    if(k==1)
    {
        insAtHead(head,tail,data);
        return;
    }
    // if list is empty
    if(head==NULL)
    {
        cout<<"List is empty!"<<endl;
        return;
    }
    //if k is equal to ((length of list)+1)th position, then call insAtTail function
    if(k==(getlength(head)+1))
    {
        insAtTail(head,tail,data);
        return;
    }
    //if k is greater than (length of list)+1
    if(k>(getlength(head)+1))
    {
        cout<<"Please enter a valid position!"<<endl;
        return;
    }

    node* newNode = new node(data);
    
    node* curr = head;
    while(k>1&&k--)
        curr = curr->next;

    newNode->next = curr;
    newNode->prev=curr->prev; 
    newNode->prev->next=newNode;
    curr->prev = newNode;
}

void deleteNode(node* &head,node* &tail, int value, int pos)
{
    // if list is empty
    if(head==NULL)
    {
        cout<<"List is empty!"<<endl;
        return;
    }
    //if pos is greater than ((length of list)+1)th position
    if(pos>(getlength(head)))
    {
        cout<<"Please enter a valid position!"<<endl;
        return;
    }
    
    cout<<"Before Deleting:"<<endl;
    print(head);
    cout<<endl;

    node* temp = head;
    // For first node/Deleting node from head
    if (value==temp->data && pos==1)
    {
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    // For deleting nodes(including the node at tail) other than first node(node at head)
    else
    {
        node* before=NULL;
        while (temp!= NULL && temp->data != value)
        {
            before=temp;
            temp=temp->next;
        }
        if(temp==NULL) // To check if the node containing data value is actually present in the list or not
        {
            cout<<"Node not found!"<<endl;
            return;
        }
        else if (tail->data==value) // Tail condition
        {   
            temp->prev->next=temp->next;
            temp->prev=NULL;
            temp->next=NULL;
            tail=before;
            delete temp;
            
        }
        else
        {
            before->next=temp->next;
            temp->next->prev=temp->prev;
            // temp->prev->next=temp->next;
            temp->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
    }
}

int main()
{
    node *first = new node(3);

    // head and tail formation
    node *head = first;
    node *tail = first;

    // Inserting nodes at head
    insAtHead(head,tail, 5);
    insAtHead(head,tail, 0);
    insAtHead(head,tail, 7);
    insAtHead(head,tail, 10);

    // Inserting nodes at tail
    insAtTail(head,tail,6);
    insAtTail(head,tail,1);
    
    // Inserting nodes at kth position
    insAtPos(head,tail,2,7);

    // Deleting the node present in the given position at doubly linked list
    deleteNode(head,tail,10,1);
    cout<<"After Deleting:"<<endl;
    print(head);

    return 0;
}