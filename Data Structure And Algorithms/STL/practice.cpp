#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int flag = 0;
    if (a[1] == 1 && a[n - 1] == 0)
    {
        for (ll i = 1; i < n-1; i++)
        {
           if(a[i]==1){
               flag=1;
           }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"YES"<<endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}