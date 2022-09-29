#include<iostream>
using namespace std;

int fact(int n)
{
    long long int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int val1= fact(n);
    int val2= fact(n-r);
    int val3= fact(r);

    int ans=val1/(val2*val3);

    return ans;
}

int main()
{
    int n,counter;

    cout<<"Enter the number of lines you want in your pattern:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}