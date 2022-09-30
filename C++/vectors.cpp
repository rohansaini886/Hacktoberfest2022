#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vl vector<lli>
#define vi vector<int>
#define lb lower_bound
#define ub upper_bound
#define sum(v) accumalate(v.begin(),v.end(),0)
#define mii map<int,int>
#define umii unordered_map<int,int>
#define order(v) sort(v.begin(),v.end())
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int N = 1e5 + 2;

bool prime[100000];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= 100000; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }
}

// stl function to use the vector
void solve1() {
 // first of lets us know what vector is all about, so basically vector are the dynamic array which can be used in place of array to use to dynamicity of the code.
 // how to implement?
 vector <int> v; // vector of int
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 // displaying the vectors by usiong the auto keyword
 for(auto& i:v) cout << i << " ";
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
solve1();
    return 0;
}