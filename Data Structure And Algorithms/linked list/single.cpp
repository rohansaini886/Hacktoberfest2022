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
        return;
    }
    n->next = head;
    head = n;
    return;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
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
    return;
}

void deleteHead(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteTail(node *head)
{
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *ptr = temp->next;
    temp->next = NULL;
    delete ptr;
}

void deleteBetweenNode(node *head, int pos)
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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 7);
    insertAtBetween(head, 10, 3);
    deleteHead(head);
    deleteTail(head);
    deleteBetweenNode(head,2);
    display(head);
}