#include <iostream>
#include <vector>

int main() {
    int n;
    std :: cin>>n;
    std :: vector<int> dp(n+1, 1);
    dp[0] = 0;
    for(int i=10;i<=n;i++) {
        int maxi = -1;
        int t=i;
        while(t != 0) {
            maxi = std :: max(t%10, maxi);
            t = t/10;
        }
        dp[i] = dp[i-maxi] + 1;
    }
    std :: cout<<dp[n];
    return 0;
}