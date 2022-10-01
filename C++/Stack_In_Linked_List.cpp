//Title:  Implement stack as an ADT using Linked List 

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *top = 0;

void display()
{
    struct node *temp;
    temp = top;
    if (temp == 0)
    {
        cout << "********************" << endl;
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "********** STACK **********" << endl;
        while (temp != 0)
        {   
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}
void push(int element)
{
    struct node *newnode;
    newnode = new node();
    newnode->data = element;
    newnode->next = top;
    top = newnode;
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "********* POP Operation *********" << endl;
        cout << temp->data << " is popped from the stack " << endl;
        top = top->next;
    }
}
int main()
{
    while (1)
    {
        int ch;
        cout << "********** Menu *********" << endl;
        cout << "1.Push element in the stack." << endl;
        cout << "2.Pop element in the stack." << endl;
        cout << "3.Display Stack." << endl;
        cout << "0.Exit." << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int element;
            cout << "Enter the element to push in stack : ";
            cin >> element;
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;
        }
    }
}
