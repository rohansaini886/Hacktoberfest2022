#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
    ll K;
    cin>>K;
    for(int k=1;k<=K;k++) {
        ll ans = (pow(k, 2)*(pow(k, 2) - 1)/2) - 4*(k-1)*(k-2);
        cout<<ans<<endl;
    }
    return 0;
}