// Solution of problem https://codeforces.com/contest/1553/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int t, n, x, ans;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        x = n % 10;
        ans = (n - x) / 10;
        if (x == 9)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
