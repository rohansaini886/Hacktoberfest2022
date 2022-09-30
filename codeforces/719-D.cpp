#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, k, j, i, n;
    long long sum=0;
    cin >> t;
    for(i=0;i<t;i++){
        map<int, long long> mp;
        cin >> n;
        for(j=0;j<n;j++){
            cin >> k;
            if(mp.find(k-j) != mp.end()){
                mp.find(k-j)->second++;
            } else{
                mp.insert({k-j, 1});
            }
        }
        for(auto it = mp.begin(); it!=mp.end(); it++){
            sum += ((it->second)*(it->second - 1)/2);
        
        }
        cout << sum << endl;
        sum = 0;
    }
}