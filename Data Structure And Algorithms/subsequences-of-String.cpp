#include <bits/stdc++.h>
using namespace std;

void helper(string &s, int i, vector<string> &ans, string str)
{
    // Base Case
    if (i >= s.length())
    {
        ans.push_back(str);
        return;
    }

    // Exclude
    helper(s, i + 1, ans, str);

    // Include
    char element = s[i];
    str.push_back(element);
    helper(s, i + 1, ans, str);
}
vector<string> AllPossibleStrings(string s)
{
    int i = 0;
    string str = "";
    vector<string> ans;
    helper(s, i, ans, str);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s;
    cout<<"Enter a string:"<<endl;
    cin >> s;

    vector<string> res = AllPossibleStrings(s);
    
    for (auto i : res)
        cout << i << " ";
    cout << "\n";

    return 0;
}