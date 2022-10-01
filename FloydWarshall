#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

const int INF = 1e18;
const int MAXN = 1005;
int dist[MAXN][MAXN];

int n, m;

int32_t main()
{
    cin>>n>>m;
    for(int i = 1; i<=m; i++)
    {
        int u, v, d;
        cin>>u>>v>>d;

        dist[u][v] = d;
        dist[v][u] = d;
    }

    for(int i = 1; i<=n; i++)
    {
      for(int j = 1; j<=n; j++)
      {
        if(i == j) dist[i][j] = 0;
        else if(dist[i][j] == 0) dist[i][j] = INF;
      }
    }

    for(int k = 1; k<=n; k++)
    {
      for(int i = 1; i<=n; i++)
      {
        for(int j = 1; j<=n; j++)
        {
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }

    // dist matrix will give you all pair shortest path possible in graph
}
