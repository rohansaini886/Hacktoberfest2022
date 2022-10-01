
// QUEUE IS FIFO - FIRST IN FIRST OUT

#include <iostream>
using namespace std;

class queue
{
public:
    int num;
    queue *next;

    queue(int d)
    {
        this->num = d;
        this->next = NULL;
    }
};
queue *front = NULL, *rear = NULL, *new_node, *temp;
void insert(int item)
{
    new_node = new queue(item);
    if (front == NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
}

int delete_queue(){
    int item = 0;
    temp = front;

    if(front == NULL){
        cout << "underflow" << endl;
    }

    else{
        item=temp->num;
        if(front==rear){
            front = rear = NULL;
        }

        else front = front->next;

        delete(temp);
    }

    return item;
}

void traverse(){
    if(front==NULL){
        cout << "empty queue"<<endl;
    }

    else {
        temp = front;
        while(temp != NULL){
            cout << temp->num << " ";
            temp = temp->next;
        }

        cout << endl;
    }
}

int main(){
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    traverse();
    delete_queue();
    traverse();
}