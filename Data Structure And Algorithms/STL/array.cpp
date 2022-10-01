#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 5> a = {1, 2, 3, 4, 5};
    array<int, 5> b;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    cout << a.front() << endl;
    cout << a.back() << endl;
    b.swap(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << endl;
    }
}