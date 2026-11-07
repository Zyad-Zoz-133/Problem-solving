// the problem link : https://leetcode.com/problems/find-center-of-star-graph/description/?envType=problem-list-v2&envId=graph

#include <iostream>
#include <vector>
using namespace std;

// Finds the center node of a star graph
int find_Center(vector<vector<int>> edge)
{
      // Get the two vertices from the first edge
      int a = edge[0][0];
      int b = edge[0][1];

      // Get the two vertices from the second edge
      int c = edge[1][0];
      int d = edge[1][1];

      // The center is the vertex that appears in both edges
      return a == c || a == d ? a : b;
}

int main()
{
      // Store the edges of the star graph
      vector<vector<int>> edge{
          {1, 2}, {2, 3}, {4, 2}};

      // Print the center vertex
      cout << "The center is: " << find_Center(edge);
}