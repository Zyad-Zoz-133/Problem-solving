// the problem link: https : // www.interviewbit.com/problems/cycle-in-directed-graph/
#include <iostream>
#include <vector>
using namespace std;

// DFS to detect a cycle in an undirected graph
bool dfs(int node, int parent, vector<vector<int>> &adj, vector<bool> &visited)
{

      // Mark the current node as visited
      visited[node] = true;

      // Traverse all neighbors of the current node
      for (int neighbor : adj[node])
      {

            // If the neighbor has not been visited, explore it using DFS
            if (!visited[neighbor])
                  if (dfs(neighbor, node, adj, visited))
                        return true;

                  // If the neighbor is already visited and is not the parent,
                  // then a cycle exists
                  else if (neighbor != parent)
                        return true;
      }

      // No cycle was found in this DFS traversal
      return false;
}

// Checks whether the graph contains a cycle
bool hasCycle(int n, vector<vector<int>> &edges)
{
      // Build the adjacency list from the given edges
      vector<vector<int>> adj(n + 1);

      for (auto &e : edges)
      {
            int u = e[0];
            int v = e[1];

            // Add an undirected connection between u and v
            adj[u].push_back(v);
            adj[v].push_back(u);
      }

      // Track visited nodes
      vector<bool> visited(n + 1, false);

      // Check all connected components of the graph
      for (int i = 1; i <= n; i++)
      {
            // Start DFS from every unvisited node
            if (!visited[i])
                  if (dfs(i, -1, adj, visited))
                        return true;
      }

      // No cycle exists in the graph
      return false;
}

int main()
{
      int n = 6;

      // Store the edges of the undirected graph
      vector<vector<int>> edges =
          {
              {1, 2},
              {1, 3},
              {4, 5},
              {5, 6},
              {4, 6}};

      // Check whether the graph contains a cycle
      if (hasCycle(n, edges))
            cout << "This Graph contains cycle";
      else
            cout << "There is no cycle";
}