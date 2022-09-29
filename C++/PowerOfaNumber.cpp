#include<iostream>
using namespace std;

int main()
{
    int x,n,i=1,power=1;

    cout << "Enter the value of number(x) and its power(n):"<<endl;
    cin >> x >> n;
    
    while (i<=n)
    {
        power*=x;
        i++;
    }
    cout << power;

    return 0;
}