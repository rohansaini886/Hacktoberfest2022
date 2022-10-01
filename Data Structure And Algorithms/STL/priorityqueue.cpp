#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(2);
    maxi.push(4);
    maxi.push(1);
    cout << maxi.top() << endl;
    int mx = maxi.size();
    for (int i = 0; i < mx ; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }
    maxi.pop();
    mini.push(2);
    mini.push(4);
    mini.push(1);
    cout << mini.top() << endl;
    int mn = mini.size();
    for (int i = 0; i < mn; i++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }
}