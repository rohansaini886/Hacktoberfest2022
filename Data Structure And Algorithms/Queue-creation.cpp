#include<iostream>
#include<vector>
using namespace std;

class queue
{
    public:
        int *arr;
        int front;
        int rear;
        int size;

    queue(int size)
    {
        arr = new int[size];
        this->front = 0;
        this->rear = 0;
        this->size = size;
    }

    void push(int element)
    {

    }

    void pop()
    {

    }

    bool isEmpty()
    {
        if(front == rear)
            return true;
        else
            return false;
    }

    int getsize()
    {
        return rear-front;
    }
};

int main()
{

    return 0;
}