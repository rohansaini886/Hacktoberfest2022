#include <iostream>
using namespace std;

// lAST NODE POINTS AT HEAD IN CLL

class node
{
public:
    int data;
    node *next;

    node(int number)
    {
        this->data = number;
        this->next = NULL;
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

void insert_node(node *&tail, int element, int d)
{

    if (tail == NULL)
    {
        node *new_node = new node(d);
        tail = new_node;
        new_node->next = new_node;
    }

    else
    {
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "empty list" << endl;
    }
    else
    {
        node *temp = tail;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != tail);
    }
}

void delete_node(node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    else
    {
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // IF CLL HAS JUST ONE NODE
        if (curr == prev)
        {
            tail = NULL;
        }

        // IF CLL HAS MORE THAN 2 NODES
        else if (curr == tail)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *tail = NULL;
    insert_node(tail, 5, 3);
    insert_node(tail, 3, 4);
    //  insert_node(tail, 4, 5);
    // print(tail);
    delete_node(tail, 3);
    print(tail);
}
