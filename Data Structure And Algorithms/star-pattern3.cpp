// Pattern Example:
// * * * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main()
{
    int n,counter;

    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

// 2nd Approach:-

    // while(n!=0)
    // {
    //     counter=n;
    //     while (counter!=0)
    //     {
    //         cout<<"* ";
    //         counter--;
    //     }
    //     cout<<endl;
    //     n--;
    // }

    return 0;
}