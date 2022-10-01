#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char o;
    cin>>s;
    int arr[26] = {0}, odd=0;
    for(int i=0;i<s.length();i++) {
        arr[int(s[i]) - 65]++;
    }
    for(int i=0;i<26;i++) {
        if(arr[i]%2) {
            odd++;
            o = char(i+65);
        }
    }
    if(odd > 1) {
        cout<<"NO SOLUTION";;
    } else {
        int k=0;
        for(int i=0;i<26;i++) {
            for(int j=0;j<arr[i]/2;j++) {
                s[k++] = char(i+65);
            }
        }
        for(int i = 0;i<s.length()/2;i++) {
            cout<<s[i];
        }
        if(odd) cout<<o;
        for(int i=k-1;i>=0;i--) {
            cout<<s[i];
        }
    }
    return 0;
}