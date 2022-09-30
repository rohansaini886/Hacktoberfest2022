//Code to check for Bipartite Graph using DFS Approach

#include <bits/stdc++.h>


using namespace std;

//color acts as visted array
bool dfsBipartite(vector<vector<int>>& adj,vector<int>& color,int src,bool col){
	
	
	color[src]=col;
	
	
		for (auto it:adj[src]){
			
				if (color[it] == -1){
					color[it] = 1-color[src];
					if (!dfsBipartite(adj,color,it,color[it])) return 0;
				} 
				else if (color[it] == color[src]) return 0;
				
				
			
		}
		
	
	
	
	
	return 1;
}

bool isBipartite(vector<vector<int>>& adj){
	int v = adj.size();
	vector<int> color(v+1,-1);
	bool col=0;
	for (int i=1;i<=v;++i){
		if (color[i]==-1){
			if (dfsBipartite(adj,color,i,col)) return 1;				
		}
	}
	return 0;
}

int main() {
	vector<vector<int>> adj2 = {{},
								{2},
								{3,7},
								{2,4},
								{3,5},
								{4,6,8},
								{5,7},
								{2,6},
								{5}};
								
								
	int v1 = 8;
	
	vector<int> vis1(v1+1,0);
	
	int par=-1;
	
	cout << isBipartite(adj2) << endl;      //OP : 1

	
}