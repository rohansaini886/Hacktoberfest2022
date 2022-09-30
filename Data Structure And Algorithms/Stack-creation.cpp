#include<iostream>
using namespace std;

class Stack
{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int data)
    {
        // first check if array is full
        if(top==size-1)
        {
            cout<<"Stack overflow for element "<<data<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop()
    {
        //check if array is empty or not
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
    }

    int getsize()
    {
        //it returns the numner of element present in stack
        return this->top+1;
    }

    int gettop()
    {
        //it returns the element present at the top of the stack
        if(top!=-1)
            return arr[this->top];
        else
            return -1;
    }

    bool isempty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack* st = new Stack(10);

    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->push(5);
    st->push(6);
    st->push(7);
    st->push(8);
    st->push(9);
    st->push(10);
    
    // st->pop();
    st->pop();
    st->pop();
    // st->pop();
    // st->pop();
    // st->pop();
    // st->pop();
    // st->pop();
    // st->pop();
    // st->pop();

    cout<<"Size of stack: "<<st->getsize()<<endl;
    cout<<st->isempty()<<endl;
    cout<<"Top->"<<st->gettop()<<endl;

    // Printing elements present in stack
    while (!st->isempty())
    {
        cout<<st->gettop()<<" ";
        st->pop();
    }

    return 0;
}