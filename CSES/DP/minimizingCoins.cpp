#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int temp;
        cin>>temp;
        a.emplace_back(temp);
    }
    vector<int> dp(x+1, 1e9);
    dp[0] = 0;
    for(int w=0;w<=x;w++) {
        for(int i=0;i<n;i++) {
            if(w-a[i] >= 0) {
                dp[w] = min(dp[w], dp[w-a[i]]+1);
            }
        }
    }
    if(dp[x] == 1e9) cout<<"-1";
    else cout<<dp[x];
    return 0;
}