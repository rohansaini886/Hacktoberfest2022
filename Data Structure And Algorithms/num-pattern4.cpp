// Pattern Example:
// 1 
// 1 2
// 1   3
// 1     4
// 1       5
// 1 2 3 4 5 6

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(i == 1 || i == n)
        {
            for (int num = 1; num <= i; num++)
            {
                cout<<num<<" ";
            }
        }
        else
        {
            cout<<1<<" ";
            for (int j = 1; j <= i-2; j++)
            {
                cout<<"  ";
            }
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}