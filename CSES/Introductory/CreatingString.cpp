#include <iostream>
#include <set>
#include <string>
#include <iterator>
using namespace std;

set<string> st;

void permute(string s, int l, int r) {
    // base case
    if(l == r) {
        st.insert(s);
        return;
    }
    for(int i=l;i<=r;i++) {
        swap(s[l], s[i]);
        permute(s, l+1, r);
        swap(s[l], s[i]); // swapping them back
    }
    return;
}

int main() {
    string s;
    cin>>s;
    int n = s.length();
    permute(s, 0, n-1);
    cout<<st.size()<<endl;
    set<string>::iterator itr;
    for(itr = st.begin(); itr != st.end(); itr++) {
        cout<<*itr<<endl;
    }
    return 0;
}