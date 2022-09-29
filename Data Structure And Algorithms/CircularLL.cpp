#include<iostream>
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
            delete next;
            this->next = NULL; 
        }
        cout<<"(Memory is free for node with data value "<<value<<")"<<endl;
    }
};

int getlenght(node* tail)
{
    // if list is empty
    if (tail==NULL) 
        return 0;

    int cnt = 0;

    node* temp= tail;
    do
    {
        cnt++;
        temp=temp->next;
    }while (temp!=tail);
    
    return cnt;
}

void print(node* tail)
{
    // if list is empty
    if (tail==NULL)
    {
        cout<<"List is empty!(Underflow error)"<<endl;
        return;
    }
    
    node* temp=tail;
    cout<<"Elements present in the list are: "<<endl;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while (temp!=tail);
    
    cout<<endl<<endl;
}

void insertNode(node* &tail, int element, int data) 
{
    //if list is Empty 
    if(tail==NULL)
    {
        node* newNode = new node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else
    {
        // for non-empty list
        // Assuming that the element is present in the list
        // Our goal is to insert given 'data' after the given 'element' in the list

        node* curr= tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        
        node* temp= new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(node* &tail, int value)
{
    //if list is Empty 
    if(tail==NULL)
    {
        cout<<"List is Empty!"<<endl;
        return;
    }
    else
    {
        // for non-empty list containing unique data values
        // Assuming that the element is present in the list
        // Our goal is to delete the node with the given 'value' from the List

        node* prev=tail;
        node* curr=prev->next;
        while (curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        // if only 1 node is present in the list
        if(curr==prev) 
            tail=NULL;
        // for >=2 nodes
        else if(curr==tail)
            tail=prev;

        curr->next= NULL;
        delete curr;
    }
}

int main()
{
    node* first = new node(3);
    first->next = first;  //set next to point to itself, so as to make it cyclic

    node* tail = first;

    insertNode(tail, 3, 4);
    insertNode(tail, 4, 5);
    insertNode(tail, 5, 6);
    insertNode(tail, 6, 7);
    insertNode(tail, 3, 10);
   
    cout<<"Original Stack/Before Deletion: "<<endl;
    print(tail);

    cout<<"After Deletion: "<<endl;
    deleteNode(tail,10);

    print(tail);

    cout<<"Lenght of stack is "<<getlenght(tail)<<endl;
    return 0;
}