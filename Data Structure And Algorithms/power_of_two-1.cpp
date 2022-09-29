#include<iostream>
using namespace std;

bool powerOfTwo(int n)
{
    int count=0;
    if(n<=0)
    {
        return false;
    }
    else
    {
        while (n!=0)
        {
            int setbit=n&1;
            if (setbit==1)
            {
                count++;
            }
            n=n>>1;
        }
        return (count==1);
    }
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