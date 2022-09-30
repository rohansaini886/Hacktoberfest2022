#include<iostream>
using namespace std;

int catalanNumber(int n)
{
    int sum=0;

    if (n==0 || n==1)
        return 1;
    
    for (int i = 0; i < n; i++)
    {
        sum+=catalanNumber(i)*catalanNumber(n-i-1) ;
    }
    return sum;
}

int main()
{
    int n=10;

    for (int i = 0; i < n; i++)
    {
        cout<<catalanNumber(i)<<" ";
    }
    
    return 0;
}