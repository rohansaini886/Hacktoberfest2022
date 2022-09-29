#include<iostream>
using namespace std;

bool powerOfTwo(int n)
{
    if(n<=0)
    {
        return false;
    }
    int ans=n&(n-1);
    return (ans==0);
}

int main()
{   
    int n;

    cout<<"Enter a number to check if it is power of two or not:"<<endl;
    cin>>n;

    if (powerOfTwo(n))
    {
        cout<<n<<" is Power of two."<<endl;
    }
    else
    {
        cout<<n<<" is not a Power of two."<<endl;
    }

    return 0;
}