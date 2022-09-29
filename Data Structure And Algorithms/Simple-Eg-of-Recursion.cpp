#include<iostream>
using namespace std;

// Printing digits of number using Recursion
void printDigits(int n)
{
    // Base Case
    if(n==0)
        return;

    int rem=n%10;
    n=n/10;
    printDigits(n);
    cout<<rem<<" ";
}

// Reversing given number using Recursion
void reverse(int n,int ans)
{
    // Base Case
    if(n==0)
    {
        cout<<endl<<ans<<endl;;
        return;
    }

    int rem=n%10;
    ans=ans*10+rem;
    n=n/10;

    reverse(n,ans);
}

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    printDigits(n);

    reverse(n,0);

    return 0;
}