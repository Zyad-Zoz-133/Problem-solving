// Problem link: https://www.geeksforgeeks.org/problems/rod-cutting0840/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the maximum profit
int cutRod(vector<int> &price)
{

      // Get the length of the rod
      int n = price.size();

      // Create a DP array and initialize all values with 0
      // dp[i] stores the maximum profit for a rod of length i
      vector<int> dp(n + 1, 0);

      // Loop through all possible rod lengths
      for (int i = 1; i <= n; i++)
      {

            // Try all possible first cut lengths
            for (int j = 1; j <= i; j++)
            {

                  // Calculate the profit of choosing the current piece
                  // price[j - 1] = price of the selected piece
                  // dp[i - j] = maximum profit of the remaining piece

                  // Choose the maximum profit
                  dp[i] = max(dp[i], price[j - 1] + dp[i - j]);
            }
      }

      // Return the maximum profit for the whole rod
      return dp[n];
}

int main()
{

      // Prices for each rod length
      vector<int> price = {2, 5, 7, 8};

      // Print the maximum possible profit
      cout << cutRod(price);

      return 0;
}