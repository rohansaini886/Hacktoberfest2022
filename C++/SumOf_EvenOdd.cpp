#include <iostream>
using namespace std;

int main()
{
    int n,a,sum1=0,sum2=0;
    cout<<"Enter an integer: ";
    cin>>n;
    
    while(n>0)
    {
        a=n%10;
        if(a%2==0)
        {
          sum1+=a;
        }
        else
        {
          sum2+=a;
        }
        n=n/10;
    }
    cout<<sum1<<" "<<sum2;
}