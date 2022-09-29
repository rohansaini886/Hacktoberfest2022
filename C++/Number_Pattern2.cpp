#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j=1,val=1;

    cout<<"Enter the lines you want in your pattern: ";
    cin>>n;

    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
