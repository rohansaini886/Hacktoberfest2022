#include <iostream>
using namespace std;

int bookShop(int x, int n, int dp[], int h[], int s[]) {
    if(x <= 0) {
        dp[0] = 0;
        return dp[0];
    }
    if(dp[x] != 0) {
        return dp[x];
    }
    for(int i=0;i<n;i++) {
        dp[x] = max(dp[x], s[i]+bookShop(x-h[i], n, dp, h, s));
    }
    return dp[x];
}

int main() {
    int n, x;
    cin>>n>>x;
    int h[10000], s[10000];
    for(int i=0;i<n;i++) {
        cin>>h[i];
    }
    for(int i=0;i<n;i++) {
        cin>>s[i];
    }
    int dp[1000000] = {0};
    cout<<bookShop(x, n, dp, h, s);
    return 0;
}