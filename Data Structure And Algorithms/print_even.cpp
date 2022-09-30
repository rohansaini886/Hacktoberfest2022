#include<iostream>
using namespace std;

void printEven(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
    } 
}

int main()
{
    int n;
    cout<<"Enter number upto which you want to print even number starting from 0:"<<endl;
    cin>>n;

    printEven(n);

    return 0;
}