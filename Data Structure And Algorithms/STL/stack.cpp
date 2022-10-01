#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<string>s;
    s.push("1");
    s.push("2");
    s.push("3");
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
}