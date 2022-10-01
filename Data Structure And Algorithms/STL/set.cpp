#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << endl;
    }
    auto it = s.find(4);
    cout << *it << endl;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
}