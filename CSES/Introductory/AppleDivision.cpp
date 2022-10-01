#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

ll minDifference(vector<ll> v, ll currSum, ll totalSum, ll i) {
    if(i == 0) return abs(totalSum-currSum-currSum);
    // In any recursive call, we either take that element or we don't. We do whatever gives us the miniumum
    return min(minDifference(v, currSum+v[i], totalSum, i-1), minDifference(v, currSum, totalSum, i-1));
}

int main() {
    ll n;
    vector <ll> v;
    ll totalSum = 0;
    cin>>n;
    for(ll i=0;i<n;i++) {
        ll x;
        cin>>x;
        v.emplace_back(x);
        totalSum += x;
    }
    cout<<minDifference(v, 0, totalSum, n-1);
    return 0;
}