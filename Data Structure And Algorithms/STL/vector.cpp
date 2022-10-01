#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(5, 0);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cin>>a[i];
    //     cout<<a[i]<<endl;
    // }
    vector<int>v={4,5,6,1,3};
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    a.push_back(10);
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    a.pop_back();
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<endl;
    }
    cout<<binary_search(v.begin(),v.end(),4);
}