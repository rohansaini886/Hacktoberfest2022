#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n == 1) cout<<"1";
    else if(n <= 3) {
        cout<<"NO SOLUTION"<<endl;
    } else {
        int a[n], counter=2, i=0;
        for(i=0;counter<=n;i++) {
            a[i] = counter;
            counter+=2;
        }
        counter = 1;
        while(i<n) {
            a[i] = counter;
            counter+=2;
            i++;
        }
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}