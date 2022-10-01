// solution for https://codeforces.com/contest/205/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int min = INT32_MAX, n, temp, ans, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp < min)
        {
            min = temp;
            ans = i;
            flag = 0;
        }
        else if (temp == min)
        {
            flag = 1;
        }
    }
    if (flag)
        cout << "Still Rozdil";
    else
        cout << ans + 1;
    return 0;
}
