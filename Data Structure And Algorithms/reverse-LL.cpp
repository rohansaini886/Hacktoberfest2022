#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next!=NULL)
        {
            this->next = NULL;
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

void traverse(node *head)
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
        node *newNode = new node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        // Create a new node
        node *newNode = new node(data);
        // newNode ke next me first ke first node ka address store krado jo ki head me h
        newNode->next = head;
        // head ko newNode ke address se update krado
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
        node *newNode = new node(data);
        tail = newNode;
        head = newNode; 
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
    
    int pos = k-1;
    // Create a new node
    node *newNode = new node(data);

    // Traverse to (k-1)th position
    node* temp=head;
    while(pos>1)
    {
        temp=temp->next;
        pos--;
    }

    // Update next of newnode to point to kth node and then update (k-1)th node to point to newnode
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(node* &head,int value, int pos)
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
    traverse(head);
    cout<<endl;

    node* temp = head;
    // For first node/Deleting node from head
    if (value==temp->data && pos==1)
    {
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    // For deleting nodes(including the node at tail) other than first node(node at head)
    else
    {
        node* prev=NULL;
        while (temp!= NULL && temp->data != value)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL) // To check if the node containing data value is actually present in the list or not
        {
            cout<<"Node not found!"<<endl;
            return;
        }
        else
        {
            prev->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
    }
}

void reverseLL(node* &head, node* temp1, node* temp2)
{
    if(temp2==NULL)
        return;

    node* temp1= NULL;
    node* temp2= head;

    
}

int main()
{
    // Formation of the very first node
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
    insAtPos(head,tail,2,2);

    // // Printing the nodes present in the singly linked list
    // traverse(head);

    //Deleting the kth node present in the singly linked list
    deleteNode(head,10,1);
    cout<<"After Deleting:"<<endl;
    traverse(head);

    node* temp1= head;
    node* temp2= head;
    
    reverseLL(head,temp1,temp2);

    return 0;
}