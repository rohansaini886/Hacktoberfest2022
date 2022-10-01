/*Title: Create a singly linked list with options:
a. insert (at the front, at the end, in the middle),
b. delete (at front, at the end, in the middle),
c. Display*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
} *head = 0, *tail = 0;
int length = 0;
void insert_at_begin(int ele)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    if (head == 0)
    {
        newnode->next = NULL;
        head = newnode;
        tail = newnode;
        length = length + 1;
    }
    else
    {
        newnode->next = head;
        head = newnode;
        length = length + 1;
    }
}

void insert_at_end(int ele)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    if (head == 0)
    {
        newnode->next = NULL;
        head = newnode;
        tail = newnode;
        length = length + 1;
    }
    else
    {
        tail->next = newnode;
        newnode->next = NULL;
        tail = newnode;
        length = length + 1;
    }
}

void insert_at_middle(int ele)
{
    node *newnode;
    node *temp1;
    node *temp2;
    int mid;
    int x = 1;
    newnode = new node();
    temp1 = new node();
    temp2 = new node();
    newnode->data = ele;
    mid = length / 2;
    temp1 = head;
    while (temp1 != NULL)
    {

        if (x == mid)
        {
            temp2 = temp1->next;
            temp1->next = newnode;
            newnode->next = temp2;
            length = length + 1;
            break;
        }
        x = x + 1;
        temp1 = temp1->next;
    }
}

void insert_after_point(int x, int ele)
{

    node *newnode;
    node *temp1;
    node *temp2;
    newnode = new node();
    temp1 = new node();
    temp2 = new node();
    newnode->data = ele;
    temp1 = head;
    while (temp1 != NULL)
    {
        if (temp1->data == x)
        {
            temp2 = temp1->next;
            temp1->next = newnode;
            newnode->next = temp2;
            length = length + 1;

            break;
        }

        temp1 = temp1->next;
    }
}

void display_ll()
{
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void delete_at_front()
{
    node *temp;
    temp = new node();
    temp = head;
    cout << "\n"
         << head->data << " is deleted !" << endl;
    head = head->next;
    free(temp);
    length = length - 1;
}

void delete_at_end()
{
    node *temp;
    temp = new node();
    node *tailprev;
    tailprev = new node();
    node *temp2;
    temp2 = new node();
    temp = head;
    temp2 = tail;
    while (temp != tail)
    {
        tailprev = temp;
        temp = temp->next;
    }
    cout << tail->data << " is deleted!" << endl;
    tailprev->next = NULL;
    tail = tailprev;
    free(temp2);
    length = length - 1;
}
void deletemid()
{
    int mid, midprev, midnext, x, x1;
    if (length % 2 == 0)
    {
        mid = length / 2;
    }
    else
    {
        mid = length / 2 + 1;
    }
    midprev = mid - 1;
    midnext = mid + 1;
    node *temp;
    temp = new node();
    node *midnode;
    midnode = new node();
    node *midprevnode;
    midprevnode = new node();
    node *midnextnode;
    midnextnode = new node();
    x = 1;
    temp = head;
    while (temp != NULL)
    {
        if (x == mid)
        {
            midnode = temp;
        }
        else if (x == midprev)
        {
            midprevnode = temp;
        }
        else if (x == midnext)
        {
            midnextnode = temp;
        }

        x = x + 1;
        temp = temp->next;
    }

    midnode->next = NULL;
    midprevnode->next = midnextnode;
    cout << midnode->data << " is deleted !" << endl;

    free(midnode);
    length = length - 1;
}

int main()
{

    while (1)
    {
        int ch;
        cout << "\n********** Menu **********" << endl;
        cout << "\n1.Insert at front " << endl;
        cout << "2.Insert at the end" << endl;
        cout << "3.Insert at Middle" << endl;
        cout << "4.Delete at front" << endl;
        cout << "5.Delete at end" << endl;
        cout << "6.Delete at middle" << endl;
        cout << "7.Display linked list " << endl;
        cout << "0.Exit." << endl;

        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << endl;
            int element;
            cout << "Enter the element : ";
            cin >> element;
            insert_at_begin(element);

            break;
        case 2:
            cout << endl;
            int element2;
            cout << "Enter the element : ";
            cin >> element2;
            insert_at_end(element2);

            break;
        case 3:
            int element4;
            cout << "Enter element : ";
            cin >> element4;
            insert_at_middle(element4);

            break;

        case 4:
            delete_at_front();

            break;
        case 5:
            delete_at_end();

            break;
        case 6:

            deletemid();

            break;
        case 7:
            cout << endl;
            display_ll();

            break;
        case 0:
            exit(0);
            break;
        }
    }
}
