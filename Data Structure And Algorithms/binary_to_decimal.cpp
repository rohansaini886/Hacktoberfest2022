#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int binary,temp;
    int i=0,dec=0;

    cout<<"Enter a binary number:"<<endl;
    cin>>binary;

    temp=binary;
    while(temp!=0)
    {
        int digit=temp%10;
        dec=digit*pow(2,i)+dec;
        temp=temp/10;
        i++;
    }

    cout<<"Decimal equivalent of binary number "<<binary<<" is "<<dec<<endl;

    return 0;
}