#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
const int inf = 1e9 + 69;

int grid[N][N];
int vis[N][N];
int lev[N][N];
int n, m;
void reset() {
      for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                  grid[i][j] = 0;
                  lev[i][j] = inf;
                  vis[i][j] = 0;
            }
      }
}
vector<pair<int, int>> moves = {
      {0, 1}, {0, -1}, {1, 0}, { -1, 0},
      {1, 1}, { -1, 1}, { -1, -1}, {1, -1}
};

bool valid(pair<int, int> a) {
      return a.first >= 0 && a.first < n && a.second >= 0 && a.second < m;
}
int bfs() {
      int mx = -1;
      for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                  mx = max(mx, grid[i][j]);
            }
      }
      queue<pair<int, int>> q;
      for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                  if (grid[i][j] == mx) {
                        q.push({i, j});
                        lev[i][j] = 0;
                        vis[i][j] = 1;
                  }
            }
      }
      int ans = 0;
      while (not q.empty()) {
            pair<int, int> curv = q.front();

            q.pop();
            for (auto move : moves) {
                  pair<int, int> curchild;
                  curchild.first = move.first + curv.first;
                  curchild.second = move.second + curv.second;
                  if (not valid(curchild))
                        continue;
                  if (vis[curchild.first][curchild.second])
                        continue;
                  lev[curchild.first][curchild.second] = lev[curv.first][curv.second] + 1;
                  vis[curchild.first][curchild.second] = 1;
                  ans = max(ans, lev[curchild.first][curchild.second]);
                  q.push(curchild);
            }
      }
      return ans;
}
void getans() {
      cin >> n >> m;
      reset();
      for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                  cin >> grid[i][j];
            }
      }
      cout << bfs() << '\n';
}

int main() {
      getans();
      return 0;
}