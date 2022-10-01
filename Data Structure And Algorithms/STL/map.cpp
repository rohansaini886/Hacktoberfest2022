#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,string>m;
    m[1]="sai";
    m[3]="nithin";
    m.insert({5,"gubba"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count(3)<<endl;
    m.erase(5);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it = m.find(3);
    cout<<(*it).first<<" "<<(*it).second<<endl;
}