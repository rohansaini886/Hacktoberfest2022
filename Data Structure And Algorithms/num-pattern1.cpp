// Pattern Example:
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
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
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}