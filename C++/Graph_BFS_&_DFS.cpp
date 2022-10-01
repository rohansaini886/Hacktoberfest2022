// Title: Represent a given graph using adjacency list or matrix and perform DFS and BFS. Use the map of the area around the college as the graph. 
// Identify the prominent landmarks as nodes and perform DFS and BFS on that     

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void edge(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
}


void bfs(int s,vector<int>adj[],bool visit[]){
  queue<int>q;
  q.push(s);
  visit[s]=true;
  while(!q.empty()){
    int u=q.front();
    cout<<u<<" ";
    q.pop();

    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        q.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}

void dfs(int s,vector<int>adj[],bool visit[]){
  stack<int>stk;
  stk.push(s);
  visit[s]=true;
  while(!stk.empty()){
    int u=stk.top();
    cout<<u<<" ";
    stk.pop();

    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        stk.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}


int main(){
    int ver,e;
    cout << "Enter the No. of Vertices & Edges : ";
    cin >> ver >> e;
  vector<int>adj[ver];
  bool visit[5];
  
  for(int i=0;i<ver;i++){
    visit[i]=false;
  }
 
  cout << "Enter edges : ";
  for (int i=0;i<e;i++){
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
  }
  
  cout<<"BFS traversal is :"<<"  ";
  
  bfs(0,adj,visit);
  cout<<endl;
  
  for(int i=0;i<ver;i++){
    visit[i]=false;
  }
  cout<<"DFS traversal is :"<<"  ";
  
  dfs(0,adj,visit);
}