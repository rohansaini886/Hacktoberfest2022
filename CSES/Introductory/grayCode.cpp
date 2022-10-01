#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

vector<string> GrayCode(int n) {
    if(n <= 0) return {"0"};
    if(n == 1) return {"0", "1"};

    vector<string> recAns = GrayCode(n-1);
    vector<string> ans;

    // first case
    for(int i=0;i<recAns.size();i++) {
        ans.emplace_back("0" + recAns[i]);
    }

    // second case
    for(int i=recAns.size()-1;i>=0;i--) {
        ans.emplace_back("1" + recAns[i]);
    }

    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<string> ans = GrayCode(n);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}