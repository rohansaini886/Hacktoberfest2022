// Title:  Accept input as a string and construct a Doubly Linked List for the input string with each Node contains, as a data one character from the string and performs: 
// a) Insert b) delete c) Display forward d) Display backward

#include <iostream>
using namespace std;
class node
{
public:
    char data;
    node *next;
    node *prev;
} *head = 0, *tail = 0;

void insert_at_begin(char ele)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    if (head == 0)
    {
        head = newnode;
        tail = newnode;
        head->prev = NULL;
        head->next = NULL;
        tail->prev = NULL;
        tail->next = NULL;
    }
    else
    {
        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insert_at_end(char ele)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    if (head == 0)
    {
        head = newnode;
        tail = newnode;
        head->prev = NULL;
        head->next = NULL;
        tail->prev = NULL;
        tail->next = NULL;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = NULL;
        tail = newnode;
    }
}

void insert_after_particular(char ele, char point)
{
    node *newnode;
    newnode = new node();
    newnode->data = ele;
    node *temp = head;
    temp = new node();
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == point)
        {
            node *t1, *t2;
            t1, t2 = new node();
            t1 = temp;
            t2 = temp->next;
            newnode->prev = t1;
            newnode->next = t2;
            t1->next = newnode;
            t2->prev = newnode;
        }

        temp = temp->next;
    }
}
void delete_begin()
{
    node *temp;
    temp = new node();
    cout << head->data << " is deleted !" << endl;
    temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    //free(temp);
}

void delete_end()
{
    node *temp;
    temp = new node();
    node *tailprev;
    tailprev = new node();
    temp = tail;
    cout << tail->data << " is deleted !" << endl;
    tailprev = tail->prev;
    tailprev->next = NULL;

    tail = tail->prev;
    //free(temp);
}

void delete_after_particular(char point)
{
    node *temp;
    temp = new node();
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == point)
        {
            node *t1, *t2, *t3;
            t1, t2, t3 = new node();
            t1 = temp;
            t2 = temp->next;
            t3 = t2->next;
            cout << t2->data << " is deleted !" << endl;
            t1->next = t3;
            t3->prev = t1;
        }
        temp = temp->next;
    }
}

void display_begin()
{
    node *temp;
    temp = new node();
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void display_end()
{
    node *temp;
    temp = new node();
    temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

int main()
{
    while (1)
    {
        int ch;
        cout << "\n-------Menu----------" << endl;
        cout << "1.Insert at beginning" << endl;
        cout << "2.Insert at end" << endl;
        cout << "3.Insert at after particular point " << endl;
        cout << "4.Delete at begin" << endl;
        cout << "5.Delete at end" << endl;
        cout << "6.Delete after particular point" << endl;
        cout << "7.Traverse from begin" << endl;
        cout << "8.Traverse from end" << endl;
        cout << "0.Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            char element;
            cout << "Enter element : ";
            cin >> element;
            insert_at_begin(element);
            break;
        case 2:
            char element2;
            cout << "Enter element : ";
            cin >> element;
            insert_at_end(element);
            break;
        case 3:
            char element3, point;
            cout << "Enter element after which new element is to be inserted : ";
            cin >> point;
            cout << "Enter element : ";
            cin >> element3;
            insert_after_particular(element3, point);
            break;
        case 4:
            delete_begin();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            char point2;
            cout << "Enter element after which element is to be deleted : ";
            cin >> point2;
            delete_after_particular(point2);
            break;
        case 7:
            cout << "---------Doubly Linked List---------" << endl;
            display_begin();
            cout << endl;
            break;
        case 8:
            cout << "---------Doubly Linked List---------" << endl;
            cout << endl;
            display_end();
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }
}
