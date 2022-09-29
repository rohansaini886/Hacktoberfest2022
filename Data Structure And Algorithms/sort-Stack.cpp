#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int>& s, int topelement)
{
    if(s.empty() || s.top()<topelement)
    {
        s.push(topelement);
        return;
    }
   
    int element = s.top();
    s.pop();

    sortedInsert(s, topelement);

    s.push(element);
}

void sortStack(stack<int>& s)
{
    if(s.empty())
        return;
    
    int topelement = s.top();
    s.pop();

    sortStack(s);

    sortedInsert(s, topelement);
}

int main()
{
    stack<int> s;
    s.push(4);
    s.push(7);
    s.push(1);
    s.push(0);

    sortStack(s);

    cout<<"Sorted stack:"<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}