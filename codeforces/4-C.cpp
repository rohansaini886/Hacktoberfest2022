#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
// #define end '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
#define yes cout<<"YES"<<end
#define no cout<<"NO"<<end


void solve3(){
    int n; cin >> n;
    unordered_map <string,int> m;
    // int k = 1;
    for(int i = 0; i < n; ++i)
    {
        string s; cin >> s;
        if (i == 0)
        {
            m[s]++;
            cout << "OK" << "\n";
        }
        else
        {
            // cout << s << "\n";
            if (m[s] == 0)
            {
                // cout << "l";
                // k = 1;
                m[s]++;
                cout << "OK" << "\n";
            }
            else
            {

                cout << s << m[s] << "\n";
                m[s]++;
                // k++;
            }
        }
    }
    
}

int main() {
cin.tie(0);
ios_base::sync_with_stdio(false);
// int tt; cin>>tt;
// while(tt--) 
    solve3();
   
return 0;
}
