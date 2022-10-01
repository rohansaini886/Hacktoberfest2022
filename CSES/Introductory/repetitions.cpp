#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    char letter = s[0];
    int count = 1, maxi = 1;
    for(int i=1;i<s.length();i++) {
        if(s[i] == letter) {
            count++;
            maxi = max(count, maxi);
        } else {
            letter = s[i];
            count = 1;
        }
    }
    cout<<maxi;
    return 0;
}