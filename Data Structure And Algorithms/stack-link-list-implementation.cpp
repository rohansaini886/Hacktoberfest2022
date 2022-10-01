#include <iostream>
using namespace std;
class stack
{
public:
    int num;
    stack *next;

    stack(int d)
    {
        this->num = d;
        this->next = NULL;
    }
};

stack *tos = NULL, *new_node, *temp;

void push(int item)
{
    new_node = new stack(item);
    new_node->next = tos;
    tos = new_node;
}

int pop()
{
    int item = 0;
    temp = tos;
    if (tos == NULL)
    {
        cout << "underflow";
    }
    else
    {
        item = tos->num;
        tos = tos->next;
    }
    return item;
}

void traverse()
{
    if (tos == NULL)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        temp = tos;
        while (temp != NULL)
        {
            cout << temp->num << " ";
            temp = temp->next;
        }
    }
}

int top()
{
    int top = tos->num;
    return top;
}



int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    traverse();

 }