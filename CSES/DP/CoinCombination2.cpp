#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// const long MOD = 10e9 + 7;

int main() {
    int n, x;
    cin>>n>>x;
    vector<int> c(n);
    for(int i=0;i<n;i++) {
        cin>>c[i];
    }
    // sort(c.begin(), c.end());
    vector<long> dp(x+5, 0);
    dp[0] = 1;
    for(int i=0;i<n;i++) {
        for(int j=1;j<=x;j++) {
            if(j-c[i] >= 0) {
                dp[j] += dp[j-c[i]];
                dp[j] %= 1000000007;
            }
        }
    }

    cout<<dp[x];

    return 0;
}