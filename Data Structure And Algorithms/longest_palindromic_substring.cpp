#include <bits/stdc++.h>
#define ll long long int
#define pii pair<ll, ll>
using namespace std;

string longestPalindrome(string s)
{
    int n = s.size();
    string res = s.substr(0, 1);
    int maxlen = 1;

    for (int k = 0; k < n; k++)
    {
        int i = k, j = k;
        while (i >= 0 && j < n && s[i] == s[j])
        {
            i--, j++;
        }

        if (j - i - 1 > maxlen)
        {
            maxlen = j - i - 1;
            res = s.substr(i + 1, j - i - 1);
        }

        i = k, j = k + 1;
        while (i >= 0 && j < n && s[i] == s[j])
        {
            i--, j++;
        }

        if (j - i - 1 > maxlen)
        {
            maxlen = j - i - 1;
            res = s.substr(i + 1, j - i - 1);
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str = "babad" ;
    string pal = longestPalindrome(str) ;
    cout<<pal<<endl;
}
