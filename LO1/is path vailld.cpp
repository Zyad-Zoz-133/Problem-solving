// The problem link: https://leetcode.com/problems/find-if-path-exists-in-graph/description/?envType=problem-list-v2&envId=graph

#include <iostream>
#include <vector>
using namespace std;

// DFS to check if a path exists between the source and destination
bool dfs(int S, int &destination, vector<vector<int>> &adj, vector<bool> &visited)
{

    // If the current node is the destination, a path exists
    if (S == destination)
        return true;

    // Mark the current node as visited
    visited[S] = true;

    // Traverse all neighbors of the current node
    for (int neighbor : adj[S])
    {
        // Explore unvisited neighbors using DFS
        if (!visited[neighbor])
            if (dfs(neighbor, destination, adj, visited))
                return true;
    }

    // No path was found from the current node
    return false;
}

// Builds the graph and checks if a valid path exists
bool isValidPath(int n, vector<vector<int>> &edges, int S, int destination)
{

    // Create an adjacency list to represent the graph
    vector<vector<int>> adj(n);

    // Build the undirected graph from the given edges
    for (auto x : edges)
    {
        int u = x[0];
        int v = x[1];

        // Add an edge in both directions
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Track visited nodes to avoid visiting the same node again
    vector<bool> visited(n, false);

    // Start DFS from the source node
    return dfs(S, destination, adj, visited);
}

int main()
{
    int n = 6;

    // Store the edges of the undirected graph
    vector<vector<int>> edges{
        {0, 1},
        {0, 2},
        {3, 5},
        {5, 4},
        {4, 3}};

    // Define the source and destination nodes
    int source = 0;
    int destination = 4;

    // Check if a valid path exists between the two nodes
    if (isValidPath(n, edges, source, destination))
        cout << "Path exists between " << source << " and " << destination;
    else
        cout << "No path exists between " << source << " and " << destination;
}