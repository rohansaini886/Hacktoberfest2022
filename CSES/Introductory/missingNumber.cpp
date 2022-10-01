#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++) {
        cin>>a[i];
    }
    int ans = 0;
    sort(a, a+n-1);
    for(int i=0;i<n-1;i++) {
        if(a[i] != i+1) {
            ans = i+1;
            break;
        }
    }
    if(ans == 0) {
        ans = n;
    }
    cout<<ans;
    return 0;
} 