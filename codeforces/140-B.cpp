#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define endl '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
// unordered_map <string,int> m;
// for(auto & i : m1)



void solve(){
                int m; cin >> m;
                int arr[m] = {0};
                for (int i = 0; i < m; ++i)
                {
                    int a; cin >> a;
                    arr[a] = i + 1;
                }

                // for (int i = 0; i < m+1; ++i)
                // {
                //     cout << arr[i] << endl;
                // }

                int n; cin >> n;
                ll sum1 = 0,sum2 = 0;

                for (int i = 0; i < n; ++i)
                {
                    int x; cin >> x;
                    sum1 += arr[x];
                    sum2 += m - arr[x] +1;
                }
                    cout << sum1 << " " << sum2 << endl;


    }
        

int main() {
cin.tie(0);
ios_base::sync_with_stdio(false);
// int tt; cin>>tt;
// while(tt--) 
    solve();
   
return 0;
}

