#include<unordered_map>
#include<queue>
#include<list>


bool isCyclicBSF(int src,  unordered_map<int, bool> &visited,
               unordered_map<int, list<int>> &adj)   
{
   unordered_map<int, int>parent;  

   parent[src] = -1;
   visited[src] = 1;

   queue<int>q;   
   q.push(src);

   while(!q.empty())  
   {
       int frontNode = q.front();
       q.pop();

       for(auto i : adj[frontNode])
       {
           if(visited[i] == true && i != parent[frontNode])
           {
               return true;
           }

           else if(!visited[i])
           {
               visited[i] = true;
               parent[i] = frontNode;
               q.push(i);
               
           }
       }
   }

   return false;

}

bool isCyclicDFS(int src, int parent, unordered_map<int, bool> &visited,
               unordered_map<int, list<int>> &adj)

   {
      visited[src]  = true;

       for(auto neighbour : adj[src])
       {
           if(!visited[neighbour])
           {
               bool cycledetectd = isCyclicDFS(neighbour, src, visited, adj);
               if(cycledetectd)
               {
                   return true;
               }
           }
           else if(neighbour != parent){
               return true;
           }
       }
       return false;
   }

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
   unordered_map<int, list<int>>adj; 

   for(int i = 0; i<edges.size(); i++)
   {
       int u = edges[i][0];
       int v = edges[i][1];

       adj[u].push_back(v);
       adj[v].push_back(u);
   }

   unordered_map<int, bool>visited;  

   for(int i = 0; i<n; i++)   
   {
       if(!visited[i])
       {
           bool ans = isCyclicDFS(i, -1, visited, adj);

           if(ans)
           {
               return "Yes";
           }
       }
   }
   return "No";
}
