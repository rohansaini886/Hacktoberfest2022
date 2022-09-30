#include<iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    while (i<n)
    {
        if (n%2==0)
        {
            cout<<"Not a prime!"<<endl;
            break;
        }
        else
        {
            cout<<"Is a prime!"<<endl;
            break;
        }
        i++;
    }
    return 0;
}