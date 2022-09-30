#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int ts,bs,allow;
    char grade;
    double hra,da,pf;

    cout<<"Enter the value of Basic Salary and Grade:"<<endl;
    cin>>bs>>grade;

    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }

    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    ts=bs+hra+da+allow-pf;
    cout<<round(ts);

    return 0;
}
