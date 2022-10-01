#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll x, y, ans=0;
        cin>>x>>y;
        if(x < y) {
            if(y%2 == 1) {
                ans = (y*y)-x+1;
            } else {
                ans = ((y-1)*(y-1))+x;
            }
        } else {
            if(x%2 == 1) {
                ans = ((x-1)*(x-1))+y;
            } else {
                ans = (x*x)-y+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}