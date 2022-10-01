#include <bits/stdc++.h>
using namespace std;
int m = 1000000000 + 7;

int expMod(int b, int c, int n, int e) {
    //form b^c(mod m)
    if(e >= n) return c;
    return expMod(b, (b*c)%m, n, e+1);
}

int main() {
    int n;
    cin>>n;
    cout<<expMod(2, 1, n, 0);
    return 0;
}