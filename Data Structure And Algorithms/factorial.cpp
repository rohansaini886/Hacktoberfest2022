#include<iostream>
using namespace std;
#define m (1000000000+7) //(10^9+7=1000000000+7=1e9+7 as e=X10 ki power something and so e9=X10 ki power 9) 

int factorial(int n)
{
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        // fact*=i; //brute force approach
        fact=(1LL*(fact)%m*(i)%m)%m;  //to print answer modulo
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Enter number you want factorial of:"<<endl;
    cin>>n;

    cout<<factorial(n);
    return 0;
}