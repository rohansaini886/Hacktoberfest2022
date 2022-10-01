// Title: Represent graph using adjacency list or matrix and generate minimum spanning tree using  Prim’s algorithm   

#include <cstring>
#include <iostream>
using namespace std;
#define INF 9999

// No. of Vertices in a graph
#define V 5

int G[V][V] = {
  {0, 7, 38, 0, 0},
  {9, 0, 75, 12, 37},
  {65, 90, 0, 50, 62},
  {0, 27, 34, 0, 46},
  {0, 90, 62, 45, 0}};

int main() {
  int no_edge;  
  int selected[V];
  memset(selected, false, sizeof(selected));
  no_edge = 0;
  selected[0] = true;
  int x;  //  row number
  int y;  //  col number

  cout << "Edge" << "  : "<< " Weight";
  cout << endl;
  while (no_edge < V - 1) {
    int min = INF;
    x = 0;
    y = 0;

    for (int i = 0; i < V; i++) {
      if (selected[i]) {
        for (int j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) 
          { 
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    cout << x << " - " << y << " -> " << G[x][y];
    cout << endl;
    selected[y] = true;
    no_edge++;
  }
  return 0;
}