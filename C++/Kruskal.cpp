#include<bits/stdc++.h>
using namespace std;

// rank is no of nodes in a set

class DSU{
    vector<int> parent;
    vector<int> rank;
public:
    DSU(int n){
        parent.resize(n);
        rank.resize(n);

        for (int i = 0; i < n; i++)
        {
            parent[i] = -1;
            rank[i] = i;
        }
        
    }

// Find set function
    int Find(int a){
        if (parent[a] == -1)
        {
            return a;
        }
        // Path Compression
        return parent[a] = Find(parent[a]);
    }

// Unite (Union) function
    void Unite(int a, int b){
        
        int s1 = Find(a);
        int s2 = Find(b);

        if (s1!= s2)
        {
            if (rank[s1]< rank[s2])  // Union by rank
            {
                parent[s1] = s2;
                rank[s2] += rank[s1]; 
            }else
            {
                parent[s2] = s1;
                rank[s1] += rank[s2]; 
            }
        }
        return;
    }
};

class Graph{

public:
    int v;  // no of vertices
    vector<vector<int>> edgeList; // (wt,a,b) easy to sort according to wt

    Graph(int x){
        this->v = x;
    }

    void AddEdge(int x, int y, int wt){
        edgeList.push_back({wt, x, y});
    }

    int Kruskal_mst(){

        sort(edgeList.begin(), edgeList.end());

        DSU s(v);
        int ans = 0;
        for(auto edges : edgeList){
            int wt = edges[0];
            int a = edges[1];
            int b = edges[2];

            if (s.Find(a) != s.Find(b))
            {
                s.Unite(a,b);
                ans += wt;
            }   
        }
        return ans;
    }
};

int main(){
    Graph g(4);
    g.AddEdge(0,1,1); //  a,b,wt --> wt,a,b
    g.AddEdge(1,3,3);
    g.AddEdge(3,2,4);
    g.AddEdge(2, 0,2);
    g.AddEdge(0,3,2);
    g.AddEdge(1,2,2);

    cout<<g.Kruskal_mst();
    return 0;
}
