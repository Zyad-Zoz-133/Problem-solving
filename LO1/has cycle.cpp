
#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<vector<int>> &adj, vector<bool> &visited){

      visited[node]=true;

      for (int neighbor:adj[node]){
            if (!visited[neighbor])
                  if(dfs(neighbor,node,adj,visited))
                  return true;
            else if(neighbor != parent)
                  return true;
      }
      return false;
}

    bool hasCycle(int n, vector<vector<int>> &edges)
{
      vector<vector<int>> adj(n + 1);

      for (auto &e : edges)
      {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
      }

      vector<bool> visited(n + 1, false);

      for (int i = 1; i <= n; i++)
      {
            if (!visited[i])
                  if (dfs(i, -1, adj, visited))
                        return true;
            
      }

      return false;
};

   int main() {
       int n = 6;
       vector <vector<int>> edges =
 {
           {1,2},
           {1,3},
           {4,5},
           {5,6},
           {4,6}
 };
       if (hasCycle(n, edges))
           cout << "This Graph contains cycle";
       else
           cout << "There is no cycle";
   }
