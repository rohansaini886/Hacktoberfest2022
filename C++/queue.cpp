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


// in this code we ll learn how to implement the queues using stl functions

void solve1() 
{
    queue<int> q;
    q.push(1);// for adding the element to the queue
    q.push(2);
    q.pop(); // for removing the element from the queue;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

solve1();
    return 0;
}