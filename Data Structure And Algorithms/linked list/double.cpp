#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};

void insertAtHead(node *&head, node *&tail, int val)
{
    node *n = new node(val);
    if (head == NULL && tail == NULL)
    {
        head = tail = n;
        return;
    }
    n->next = head;
    n->next->prev = n;
    head = n;
    return;
}

void insertAtTail(node *&head, node *&tail, int val)
{
    node *n = new node(val);
    if (head == NULL && tail == NULL)
    {
        head = tail = n;
        return;
    }
    n->prev = tail;
    n->prev->next = n;
    tail = n;
    return;
}

void insertAtBetween(node *&head, node *&tail, int val, int pos)
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
    n->prev = temp;
    n->next->prev = n;
    return;
}

void deleteHead(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteTail(node *&tail)
{
    node *temp = tail;
    tail = tail->prev;
    tail -> next = NULL;
    delete temp;
}

void deleteBetweenNode(node *&head, node *&tail, int pos)
{
    node *temp = head;
    int c = 1;
    while (c < pos - 1)
    {
        temp = temp->next;
        c++;
    }
    node *ptr = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
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
    return;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 11);
    display(head);
    insertAtBetween(head, tail, 9, 3);
    deleteHead(head);
    deleteTail(tail);
    deleteBetweenNode(head, tail, 3);
    display(head);
}