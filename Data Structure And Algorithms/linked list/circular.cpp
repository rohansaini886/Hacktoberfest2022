// #include<bits/stdc++.h>
// using namespace std;

// class node {
//  public:
//     int data;
//     node* next;

//     node (int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtHead(node *&head,int val){
//     node *n = new node(val);
//     head=n;
//     n->next=head;
// }

// void insertAtTail(node *&head,int val){
//     if(head==NULL){
//         insertAtHead(head,val);
//         return;
//     }
//     node *n=new node(val);
//     node *temp=head;
//     while(temp->next!=head){
//         temp=temp->next;
//     }
//     n->next=head;
//     temp->next=n;
// }

// void insertAtBetween(node* head,int val,int pos){
//     node* n = new node(val);
//     int count=1;
//     node *p1,*p2;
//     p1=p2=head;
//     while(count<pos-1){
//         p1=p1->next;
//         count++;
//     }
//     p2=p1->next;
//     p1->next=n;
//     n->next=p2;
// }

// void deleteHead(node* &head){
//     node *temp,*ptr;
//     temp=ptr=head;
//     temp=temp->next;
//     while(temp->next!=head){
//         temp=temp->next;
//     }
//     temp->next=head->next;
//     head=head->next;
//     delete ptr;
// }

// void deleteTail(node *&head){
//     node *temp=head;
//     temp=temp->next;
//     while(temp->next->next!=head){
//         temp=temp->next;
//     }
//     node* ptr=temp->next;
//     temp->next=head;
//     delete ptr;
// }

// void deleteInBetween(node *&head,int pos){
//     node *p1,*p2;
//     p1=p2=head;
//     int count = 1;
//     while(count<pos-1){
//        p1=p1->next;
//        count++;
//     }
//     p2=p1->next;
//     p1->next=p2->next;
//     delete p2;
// }

// void display(node* head){
//     node* temp = head;
//     cout<<temp->data<<"->";
//     temp=temp->next;
//     while(temp!=head){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"HEAD"<<endl;
// }

// int main(){
//     node *head = NULL;
//     insertAtHead(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     insertAtTail(head,5);
//     insertAtBetween(head,7,4);
//     deleteHead(head);
//     deleteTail(head);
//     deleteInBetween(head,3);
//     display(head);
// }

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        head->next = head;
        return;
    }
    n->next = head;
    node *temp = head;
    temp = temp->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    head = n;
    return;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
    return;
}

void insertAtBetween(node *&head, int val, int pos)
{
    node *n = new node(val);
    node *temp = head;
    int c = 1;
    while (c < pos - 1)
    {
        temp = temp->next;
        c++;
    }
    n->next = temp->next;
    temp->next = n;
}

void deleteHead(node *&head)
{
    node *temp = head->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *ptr = head;
    head = head->next;
    temp->next = head;
    delete ptr;
}

void deleteTail(node *&head)
{
    node *temp = head->next;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    node *ptr = temp->next;
    temp->next = head;
    delete ptr;
}

void deleteBetweenNode(node *&head, int pos)
{
    node *temp = head;
    int c = 1;
    while (c < pos - 1)
    {
        temp = temp->next;
        c++;
    }
    node *ptr = temp->next;
    temp->next = ptr->next;
    delete ptr;
}

void display(node *head)
{
    node *temp = head->next;
    cout << head->data << "->";
    while (temp != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 7);
    insertAtHead(head, 9);
    insertAtBetween(head, 19, 4);
    deleteHead(head);
    deleteTail(head);
    deleteBetweenNode(head, 3);
    display(head);
}