#include<iostream>
using namespace std;

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout<<i*i<<endl;
    } 
}

int main()
{
    int n;
    cout<<"Enter number upto which you want to print Square of numbers starting from 0:"<<endl;
    cin>>n;

    printSquare(n);
    return 0;
}