// Taking input using adjacency list(vector) in Graph.

#include <iostream>
//We also have to include vector in our code
#include<vector>
using namespace std;

int main()
{
    // n->no. of nodes , m->no. of edges
    int n, m;
    cin>>n>>m;
    // Creating a 2-Dimensional Adjacent List (A array having each index a vector in them similarly like int arr[6], just having vector instead of integer)
    vector<int>adj[n+1];  //suppose it's for graph having 1-based node i.e, no node is zero
    

    // Marking the box having edges connecting two nodes(let u and v)
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    //The above code is for an undirected graph, as u->v and v->u both are connected using edge
    //If,we want to take input for a directed graph, i.e., u->v will only be considered. we will comment the following line:
    // adj[v].push_back(u);
    //Time Complexity : (N+2E), where n is for the adj array and 2E because at every index it's neighbour node is going to be added, suming them up will give twice the no. of edges.
    //Now, if it's a weighted graph, then we can do something like that,
    // vector<pair<int,int>>
    // for pushing the edge we can do something like this
    // cin>>u>>v>>weight;
    // adj[u].push_back({v,wt});(for directed graph)
    return 0;
}

//if graph starts from 0th Node, it's called 0-based graph
//if graph starts from 1st Node, it's called 1-based graph