import java.util.ArrayDeque;
import java.util.ArrayList;
public class bfs {
    public static ArrayList <Integer> bfsOfGraph(int V, ArrayList < ArrayList < Integer >> adj) {
        ArrayList < Integer > bfs = new ArrayList < > ();
        ArrayDeque <Integer> q = new ArrayDeque <> ();
        boolean vis[] = new boolean[V+1];
        for (int i=1; i<=V; i++)
        {
        	if (vis[i] == false)
        	{
        		q.offer(i);
        		vis[i]=true;
        	}
        	while (!q.isEmpty())
        	{
        		Integer node = q.poll();
        		bfs.add(node);
        		for (Integer edge: adj.get(node))
        		{
        			if (vis[edge] == false)
        			{
        				vis [edge] = true;
        				q.offer(edge);
        			}
        		}
        	}	
        }
      return bfs;
    }

    public static void main(String args[]) {
    	int nodeSize = 7;
        ArrayList < ArrayList < Integer >> adj = new ArrayList < > ();
        for (int i = 0; i <=nodeSize; i++) {
            adj.add(new ArrayList < > ());
        }
        adj.get(1).add(2);
        adj.get(2).add(1);
        
        adj.get(2).add(7);
        adj.get(7).add(2);
        
        adj.get(2).add(3);
        adj.get(3).add(2);
        
        adj.get(3).add(5);
        adj.get(5).add(3);
        
        adj.get(4).add(6);
        adj.get(6).add(4);
           
        ArrayList < Integer > ans = bfsOfGraph(nodeSize, adj);
        System.out.println(ans);
    }
}
