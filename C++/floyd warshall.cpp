#include<iostream>
using namespace std;
void floyd(int adj[4][4],int u)
{
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<u;j++)
		{
			for(int k=0;k<u;k++)
			{
				if(k!=i&&j!=i)
				{
					adj[j][k]=min(adj[j][k],adj[j][i]+adj[i][k]);
				}
			}
		}
	}
		for(int i=0;i<u;i++)
	{
		for(int j=0;j<u;j++)
		{
			cout<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int adj[4][4]={{0,5,10000,10000},{50,0,15,5},{30,10000,0,15},{15,10000,5,0}};
	floyd(adj,4);
}
