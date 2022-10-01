#include<bits/stdc++.h>
using namespace std;

class node {
    public :
    int data;
    node *next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

class inserting {
    public:
    void insert_head(node* &head, int val) {
        node *n = new node(val);
        n->next = head;
        head = n;
    }

    void insert_after(node* &head, int val, int key) {
        node *n = new node(val);
        node *temp = head;
        while(temp->data != key && temp->next != NULL) {
            temp = temp ->next;
        }
        if(temp->data == key) {
            n->next = temp ->next;
            temp->next = n;
        }
    return;
    }

    void insert_tail(node* &head, int val) {
        node *n = new node(val);
        node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp ->next = n;
    }
};

class deletion {
    public:
    void del_start(node* &head) {
        node* temp = head;
        cout<<"\n\nThe element to be deleted : "<<temp->data<<endl;
        head = head -> next;
        free(temp);
    }

    void del_end(node* &head) {
        node* temp = head;
        while(temp->next->next !=NULL) 
            temp = temp->next;
        node *end = temp->next;
        cout<<"\n\nThe element to be deleted : "<<end->data<<endl;
        free(end);
        temp->next = NULL;
    }
    
    void del_ele(node* &head, int key){
        node *temp = head;
        node *prev = head;
        while(temp->next !=NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp->data == key)
            prev->next = temp->next;
        cout<<"\n\nElement to be deleted : "<<temp->data<<endl;
        free(temp);
    }
};

void print(node *n) {
    while(n != NULL) {
        cout<<n->data<<" ";
        n = n-> next;
    }
}

int main()
{
    inserting obj;
    deletion obj1;
    
    node *head = NULL;
    obj.insert_head(head, 5);
    obj.insert_head(head, 6);
    obj.insert_head(head, 7);
    obj.insert_tail(head, 10);
    obj.insert_tail(head, 11);
    obj.insert_tail(head, 12);
    obj.insert_after(head, 21, 10);
    
    cout<<"Original Link List : ";
    print(head);
    
    obj1.del_start(head);
    print(head);
    
    obj1.del_end(head);
    print(head);
    
    obj1.del_ele(head, 21);
    print(head);
    
    return 0;
}
