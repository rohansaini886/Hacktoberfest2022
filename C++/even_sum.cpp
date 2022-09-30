#include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"Enter a number: ";
    cin>>n;

    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<sum;
    return 0;
}
