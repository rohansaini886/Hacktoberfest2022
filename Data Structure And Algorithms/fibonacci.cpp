#include<iostream>
using namespace std;

void printFibonacci(int n)
{
    int first=-1;
    int sec=1;

    // int first=0;
    // int sec=1;

    // cout<<first<<" "<<sec<<" ";
    // for (int start = 3; start <= n; start++)
    for (int start = 1; start <= n; start++)
    {  
        int sum=first+sec;
        cout<<sum<<" ";
        first=sec;
        sec=sum;
    }
    
}

int main()
{
    int n;
    cin>>n;

    printFibonacci(n);

    return 0;
}