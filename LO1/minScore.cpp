#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minScore = INT_MAX;

void dfs(int city, vector<vector<pair<int, int>>> &graph,
         vector<bool> &visited)
{
    visited[city] = true;

    for (auto road : graph[city])
    {
        int neighbor = road.first;
        int distance = road.second;

        minScore = min(minScore, distance);

        if (!visited[neighbor])
        {
            dfs(neighbor, graph, visited);
        }
    }
}

void min_score(int n, vector<vector<int>> &roads)
{
    vector<vector<pair<int, int>>> graph(n + 1);

    for (auto i : roads)
    {
        int a = i[0];
        int b = i[1];
        int distance = i[2];
        graph[a].push_back({b, distance});
        graph[b].push_back({a, distance});
    }

    vector<bool> visited(n + 1, false);

    dfs(1, graph, visited);
}

int main()
{
    int n = 4;

    vector<vector<int>> roads = {
        {1, 2, 9},
        {2, 3, 6},
        {2, 4, 5},
        {1, 4, 7}};

    min_score(n, roads);

    cout << "Minimum Score = " << minScore << endl;

    return 0;
}