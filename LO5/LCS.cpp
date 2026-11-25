// Problem Link: https://leetcode.com/problems/longest-common-subsequence/

#include <iostream>
#include <vector>
using namespace std;

// Function to find the length of the Longest Common Subsequence (LCS)
int LCS(string text1, string text2) {
      int n = text1.size(); // Length of the first string
      int m = text2.size(); // Length of the second string

      // Create a DP table initialized with zeros
      // dp[i][j] represents the LCS length of the first i characters of both strings
      vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

      // Fill the DP table using a bottom-up approach
      for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                  // If the current characters match, add 1 to the diagonal value
                  if (text1[i - 1] == text2[j - 1]) {
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                  }
                  else {
                        // If they don't match, take the maximum of the top and left cells
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                  }
            }
      }

      // Return the length of the Longest Common Subsequence
      return dp[n][m];
}

int main() {
      string text1 = "ABCD";
      string text2 = "ACD";

      // Print the LCS length
      cout << "LCS Is : " << LCS(text1, text2);
}

