#include <iostream>
using namespace std;
#define n 3

class queue
{
    int *a;
    int rear, front;
    int size;

public:
    queue()
    {
        a = new int[n];
        rear = -1;
        front = -1;
    }

    void enqueue(int x)
    {
        if (rear == n - 1)
        {
            cout << "queue is full" << endl;
            return;
        }
        else if (rear == -1 && front == -1)
        {
            rear++;
            front++;
            a[rear] = x;
            return;
        }
        else
        {
            rear++;
            a[rear] = x;
        }
    }

    void dequeue()
    {
        if (front == -1 || rear < front)
        {
            cout << "queue is empty" << endl;
            return;
        }
        else
        {
            front++;
        }
    }

    bool empty()
    {
        if (front > rear || (rear == -1 && front == -1))
        {
            return true;
        }
        else
            return false;
    }

};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    q.empty();
    q.dequeue();
    q.dequeue();
    q.empty();
}