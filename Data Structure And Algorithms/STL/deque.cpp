#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }
    d.pop_back();
    d.pop_front();
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }
}