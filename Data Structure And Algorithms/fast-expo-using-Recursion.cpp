#include<iostream>
using namespace std;

int fastExpoUsingRecursion(int a,int n)
{
    // Base Case
    if (n==0)
        return 1;
    if (n==1)
        return a;

    int smallerProblem=fastExpoUsingRecursion(a,(n/2));
    
    if (n&1)
        return smallerProblem*smallerProblem*a; 
    else
        return smallerProblem*smallerProblem;
}

int main()
{
    int a=2,n=10;
    cout<<"Power of a raise to b is "<<fastExpoUsingRecursion(a,n)<<endl; 
    return 0;
}