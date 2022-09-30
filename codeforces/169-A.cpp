#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define end '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
#define yes cout<<"YES"<<end
#define no cout<<"NO"<<end
// unordered_map <string,int> m;



void solve(){

        ll int n,k; cin >> n >> k;
        ll int ryan=0,final= -1e9;
        for(int i = 0; i < n; ++i)
        {
            ll int f,x; cin >> f >> x;
            if (x > k)
            {
                ryan = f - (x-k); 
            }
            else ryan = f;

            final = max(final,ryan);
        }
     cout << final << end;
        }

int main() {
cin.tie(0);
ios_base::sync_with_stdio(false);
// int tt; cin>>tt;
// while(tt--) 
    solve();
   
return 0;
}

