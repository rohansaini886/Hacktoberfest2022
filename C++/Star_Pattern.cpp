#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j=1;
    cout<<"Enter the no. of rows you want in your star pattern: ";
    cin>>n;

    while(i<=n)
    {
        j=1;
        while(j<=2*n-1)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
