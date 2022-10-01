#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int>l;

    l.push_back(1);
    l.push_back(3);
    l.push_front(4);
    
    for(auto it = l.begin();it!=l.end();it++){
        cout<<*it<<endl;
    }
    auto it = l.begin();
    auto it1 = it;
    advance(it,1);
    l.insert(it,7);
    for(auto it = l.begin();it!=l.end();it++){
        cout<<*it<<endl;
    }
    l.erase(it1);
    it = l.begin();
    for(auto it = l.begin();it!=l.end();it++){
        cout<<*it<<endl;
    }
}