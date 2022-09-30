//C++ Code to do depth-first traversal in a Graph

#include <bits/stdc++.h>


using namespace std;

void dfs(vector<vector<int>>& adj,vector<int>& vis,int src){
	vis[src] = 1;
	cout << src << " ";
	for (auto it:adj[src]){
		if (!vis[it]){
			dfs(adj,vis,it);
		}
	}
}

int main() {
	
    //2-D matrix representing edges
								
	vector<vector<int>> adj2 = {{},
								{2},
								{1,4,7},
								{5},
								{2,6},
								{3},
								{4,7},
								{2,6}};
	
	int v2 = 7;
	vector<int> vis2(v2+1,0);

    //calling DFS function to unvisited notes
	for (int i=1;i<=v2;++i){
		if (!vis2[i]){
			dfs(adj2,vis2,i);				
		}
	}
	
    /*
    OP:
    1 2 4 6 7 3 5 
    */
	return 0;
}

