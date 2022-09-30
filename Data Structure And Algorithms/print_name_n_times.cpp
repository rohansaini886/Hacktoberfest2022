#include<iostream>
using namespace std;

void printName(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout<<"Akshit"<<endl;
    }
}

int main()
{
    int n;
    cout<<"How many times do you want to print your name?"<<endl;
    cin>>n;
    
    printName(n);

    return 0;
}