// Pattern Example:
// 1 
// 2 * 2
// 3 * 3 * 3
// 4 * 4 * 4 * 4
// 5 * 5 * 5 * 5 * 5
// 6 * 6 * 6 * 6 * 6 * 6
// 6 * 6 * 6 * 6 * 6 * 6
// 5 * 5 * 5 * 5 * 5
// 4 * 4 * 4 * 4
// 3 * 3 * 3 
// 2 * 2
// 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    // For upper part of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (j%2==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    
    // For lower part of the pattern
    int count=n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*(n-i)+1; j++)
        {
            if (j%2==0)
            {
                cout<<"* ";
            }
            else
            {
                cout<<count<<" ";
            }
        }
        count--;
        cout<<endl;
    }

    return 0;
}