#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n, red=n-1, blue=1, redSum=0, blueSum=0;
        bool flag = false;
        cin>>n;
        ll a[10000];
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a, a+n);
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        redSum = a[n-1];
        blueSum = a[0] + a[1];
        while(true) {
            if(red <= blue) {
                cout<<"NO"<<endl;
                break;
            } 
            if(redSum > blueSum) {
                flag = true;
                cout<<"YES"<<endl;
                cout<<redSum<<" "<<red<<" "<<blueSum<<" "<<blue<<endl;
                break;
            }
            if(red == 0 || blue == n-1) {
                cout<<"NO"<<endl;
                break;
            }
            red--;
            blue++;
            redSum += a[red];
            blueSum += a[blue];
        }
    }
    return 0;
}