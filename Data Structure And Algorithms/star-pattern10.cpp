// Pattern Example:
// (Hollow Inverted Half Pyramid)
// * * * * * * 
// *       * 
// *     *
// *   *
// * *
// *

#include<iostream>   
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(i==1 || i==n)
        {
            for (int j = 1; j <= n-i+1; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for (int j = 1; j <= n-i-1; j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}