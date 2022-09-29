// Euclid's Algorithm is used to
// used for providing optimized solution
// for problems like GCD

// Euclid's Algo:
// gcd(a,b)=gcd(a-b,b) OR gcd(a,b)=gcd(a%b,b) ;

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a==0)
        return b;
    if (b==0)
        return a;

    while (a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
    
}

int main()
{
    int a = 12;
    int b = 4;

    cout<<"GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<endl;
    return 0;
}