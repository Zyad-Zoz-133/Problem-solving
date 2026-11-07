// Problem link: https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the minimum number of coins using Greedy
void minCoins(vector<int> &coins, int amount)
{
      // Sort coin denominations in descending order
      sort(coins.rbegin(), coins.rend());

      // Store the number of coins used for each denomination
      vector<pair<int, int>> result;

      int sub;

      // Iterate through all available coin denominations
      for (int coin : coins)
      {

            // Calculate how many coins of the current denomination can be used
            sub = amount / coin;

            // Store the number of coins and their denomination
            result.push_back({sub, coin});

            // Update the remaining amount
            amount -= (sub * coin);
      }

      // Print the coins used
      cout << "Coins used: " << endl;

      for (auto coin : result)
      {

            // Print only denominations that were actually used
            if (coin.first != 0)
                  cout << coin.first << " from " << coin.second << "$" << endl;
      }

      cout << endl;
}

int main()
{

      // Available coin denominations
      vector<int> coins = {1, 5, 10, 20, 50, 100, 200};

      // Define the target amount
      int amount = 1164;

      // Calculate and display the coins used
      minCoins(coins, amount);

      return 0;
}