#include<iostream>
using namespace std;

int reverseNumber(int n)
{
    int i=0;
    int ans=0;
    while (n!=0)
    {
        int rem=n%10;
        if (ans<INT_MIN || ans>INT_MAX)
        {
            return 0;
        }
        
        ans=(ans*10)+rem;
        n=n/10;
    }
    return ans;
}

int main()
{
    int n;

    cout<<"Enter the number you want to reverse:"<<endl;
    cin>>n;

    cout<<"Reverse of the number "<<n<<" is "<<reverseNumber(n)<<endl;

    return 0;
}