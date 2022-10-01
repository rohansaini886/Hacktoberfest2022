#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> v(n+1, 0);
    v[0] = 1;
    long long mod = 1000000007;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=6 && i-j>=0;j++) {
            v[i] += v[i-j];
            v[i] %= mod;
        }
    }
    cout<<v[n];
    return 0;
}