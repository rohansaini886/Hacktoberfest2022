#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dec,temp;
    int i=0,binary=0;

    cout<<"Enter a decimal number:"<<endl;
    cin>>dec;

    temp=dec;
    while (temp!=0)
    {
        int bit= temp&1;
        binary=(bit*pow(10,i))+binary;
        temp=temp>>1;
        i++;
    }
    
    cout<<"Binary equivalent of decimal number "<<dec<<" is "<<binary<<endl;

    return 0;
}