#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v;

void TowerOfHanoi(int n, int from, int to, int aux) {
    if(n == 0) {
        return;
    }
    TowerOfHanoi(n-1, from, aux, to);
    v.emplace_back(make_pair(from, to));
    TowerOfHanoi(n-1, aux, to, from);
}

int main() {
    int n;
    cin>>n;
    TowerOfHanoi(n, 1, 3, 2);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) {
        cout<<"Step #"<<i+1<<": "<<v[i].first<<"->"<<v[i].second<<endl;
    }
    return 0;
}