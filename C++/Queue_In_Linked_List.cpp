//Title:  Implement Queue as an ADT using Linked List 

#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
} *front = NULL, *rear = NULL;

void enqueue(int ele)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
        front->next = NULL;
        rear->next = NULL;
    }
    else
    {

        rear->next = newnode;

        rear = newnode;
        rear->next = NULL;
    }
}

void dequeue()
{
    node *temp;

    temp = new node();
    cout << front->data << " is dequeued from the queue. " << endl;
    temp = front;
    front = front->next;
    free(temp);
}

void display()
{
    node *temp;
    temp = new node();
    temp = front;
    if (front == NULL)
    {
        cout << "Queue is empty !" << endl;
    }
    else
    {

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int ch;
    while (1)
    {
        cout << "********** Menu **********" << endl;
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Display Queue" << endl;
        cout << "0.Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int element;
            cout << "Enter the element : ";
            cin >> element;
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            cout << "********** Queue **********" << endl;
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }
}
