#include<iostream>
using namespace std;
#define m (1000000000+7) //(10^9+7) 

int fastExponentiation(long long int a, long long int n)
{
    int ans=1;  
    while (n>0)
    {
        //if n is odd
        if (n&1)
        {
            ans=(1LL*(ans)%m*(a)%m)%m;
        }
        a=((a)%m*(a)%m)%m;
        n=n>>1;
    }
    return ans;
}

int main()
{
    long long int a=2,n=10;
    cout<<"Power of a raise to b is "<<fastExponentiation(a,n)<<endl; 
    return 0;
}