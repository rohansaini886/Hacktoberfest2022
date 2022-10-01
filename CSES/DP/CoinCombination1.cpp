#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    vector<int> dp(x+1, 0);
    dp[0] = 1;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int w=1;w<=x;w++) {
        for(int i=0;i<n;i++) {
            if(w-v[i] >= 0) {
                dp[w] += dp[w-v[i]];
                dp[w] %= MOD;
            }
        }
    }
    cout<<dp[x];
    return 0;
}