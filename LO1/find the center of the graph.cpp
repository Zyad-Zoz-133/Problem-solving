#include <iostream>
#include <vector>
using namespace std;

int find_Center(vector<vector<int>> edge)
{
      int a = edge[0][0];
      int b = edge[0][1];
      int c = edge[1][0];
      int d = edge[1][1];
      return a == c || a == d ? a : b;
}

int main()
{
      vector<vector<int>> edge
      {
            {1, 2}, {2, 3}, {4, 2}
      };

      cout << "The center is: "<< find_Center(edge);
}