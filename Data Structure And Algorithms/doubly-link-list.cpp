#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int number)
    {
        this->data = number;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node " << value << endl;
    }
};

void insertathead(node *&head, int number)
{
    if (head == NULL)
    {
        node *temp = new node(number);
        head = temp;
    }
    else
    {
        node *temp = new node(number);
        temp->next = head;
        head->prev = temp;
        // temp->prev= NULL; //not really required as constructor hansles this
        head = temp;
    }
}
void insertattail(node *&tail, int number)
{
    if (tail == NULL)
    {
        node *temp = new node(number);
        tail = temp;
    }
    else
    {
        node *temp = new node(number);
        tail->next = temp;
        temp->prev = tail;
        temp->next = NULL;
        tail = temp;
    }
}

void insertinmid(node *&head, node *&tail, int position, int number)
{
    if (position == 1)
    {
        insertathead(head, number);
        return;
    }
    node *trav = head;
    for (int i = 1; i < position - 1; i++)
    {
        trav = trav->next;
    }
    if (trav->next == NULL)
    {
        insertattail(tail, number);
        return;
    }
    node *temp = new node(number);
    temp->next = trav->next;
    trav->next->prev = temp;
    temp->prev = trav;
    trav->next = temp;
}

void deleteNode(int position, node *&head)
{ // bASIC LOGIC IS SEPARATE THE NODE FROM THE LINK LIST AND DELETE IT USING THE DESTRUCTOR !
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL; // IMPORTANT STEP
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        node *curr = head;
        node *previous = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            previous = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        previous->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "head is NULL" << endl;
    }
    else
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int get_length(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    print(head);
    cout << endl;
    cout << get_length(head) << endl;

    insertathead(head, 15);
    insertathead(head, 34);
    print(head);
    cout << endl;
    insertattail(tail, 20);
    insertattail(tail, 30);
    print(head);

    cout << endl;

    insertinmid(head, tail, 4, 27);
    print(head);

    deleteNode(3, head);
    print(head);

    deleteNode(1, head);
    print(head);
}