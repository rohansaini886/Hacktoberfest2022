#include <iostream>
#include <vector>
#include <string>

const unsigned int MOD = 1000000000 + 7;

int main() {
    int n;
    std :: cin>>n;
    std :: string g[1005];
    for(int i=0;i<n;i++) {
        std :: cin>>g[i];
    }
    unsigned int dp[1005][1005];
    for(int i=0;i<1005;i++) {
        for(int j=0;j<1005;j++) {
            dp[i][j] = 0;
        }
    }
    if(g[n-1][n-1] == '.') {
        dp[n][n] = 1;
    }
    for(int i=n-1;i>=0;i--) {
        for(int j=n-1;j>=0;j--) {
            if(i == n-1 && j == n-1 && g[i][j] != '*') {
                dp[n][n] = 1;
            }
            else if(g[i][j] != '*') {
                dp[i+1][j+1] = ((dp[i+2][j+1] % MOD) + (dp[i+1][j+2] % MOD)) % MOD;
            }
        }
    }
    std :: cout<<dp[1][1];
    return 0;
}