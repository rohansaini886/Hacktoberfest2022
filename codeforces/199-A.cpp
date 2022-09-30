// Solution of https://codeforces.com/contest/199/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int n, a = 0, b = 1, x = 1, temp;
    cin >> n;
    if (n == 0)
    {
        cout << "0 0 0";
    }
    else
    {
        while (x != n)
        {
            a = b;
            temp = b;
            b = x;
            x = x + temp;
        }
        cout<<"0 "<<a<<" "<<b;
    }
    return 0;
}
