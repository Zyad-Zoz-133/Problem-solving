// the problem link : https://codeforces.com/problemset/problem/263
#include <iostream>
using namespace std;

int main()
{
      int matrix[5][5];
      int column, row;

      for (int i = 0; i < 5; i++) // i is the row
      {
            for (int j = 0; j < 5; j++) // j is the column
            {
                  cin >> matrix[i][j];
                  if (matrix[i][j] == 1)
                  {
                        row = i;
                        column = j;
                  }
            }
      }

      int moves = abs(row - 2) + abs(column - 2);

      cout << moves;
}