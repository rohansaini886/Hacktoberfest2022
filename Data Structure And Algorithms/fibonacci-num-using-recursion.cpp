#include<iostream>
using namespace std;

int printFibonacciNumber(int n)
{
    // Base Case
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    int ans = printFibonacciNumber(n-1) + printFibonacciNumber(n-2);

    return ans;
}

int main()
{
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    cout<<printFibonacciNumber(n)<<endl;;
    return 0;
}