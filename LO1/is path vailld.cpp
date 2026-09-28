// The problem link : https://leetcode.com/problems/find-if-path-exists-in-graph/description/?envType=problem-list-v2&envId=graph

#include <iostream>
#include <vector>
using namespace std;

bool dfs(int S, int& destination, vector<vector<int>>& adj, vector<bool>& visited) {
    if (S == destination)return true;
    visited[S]= true;
    for (int neigbor : adj[S]) {
        if(!visited[S])
            if(dfs(neigbor,destination,adj,visited))return true;
    }
    return  false;
}

bool isValidPath(int n, vector<vector<int>>& edges, int S, int destination) {
    vector<vector<int>> adj(n);

    for (auto x : edges) {
        int u = x[0];
        int v = x[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);

    return dfs(S, destination, adj, visited);
}

int main()
{
    int n = 6;
    vector<vector<int>> edges
    {
        { 0,1 },
        { 0,2 },
        { 3,5 },
        { 5,4 },
        { 4,3 }
    };

    int source = 0;
    int destination = 4;

    if (isValidPath(n, edges, source, destination))
        cout << "Path exists between " << source << " and " << destination;
    else
        cout << "No path exists between " << source << " and " << destination;


    
}

