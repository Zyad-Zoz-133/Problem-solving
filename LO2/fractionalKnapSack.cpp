// Problem Link: https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Compare two items based on their Value/Weight ratio
// Sort items in descending order (highest ratio first)
bool compare(pair<double, int> a, pair<double, int> b)
{
      return a.first > b.first;
}

// Function to calculate the maximum value using Fractional Knapsack
double knapSack(int W, vector<int> wight, vector<int> value)
{
      // Store the ratio (Value/Weight) and the weight of each item
      vector<pair<double, int>> unit(wight.size());

      // Store the maximum value we can obtain
      double Max_value = 0;

      // Calculate the Value/Weight ratio for each item
      for (int i = 0; i < wight.size(); i++)
      {
            // Calculate value per unit of weight
            unit[i].first = (double)value[i] / wight[i];

            // Store the item's weight
            unit[i].second = wight[i];
      }

      // Sort items from highest ratio to lowest ratio
      sort(unit.begin(), unit.end(), compare);

      // Iterate through items after sorting
      for (int i = 0; i < wight.size(); i++)
      {
            // Check if we can take the entire item
            if (unit[i].second <= W)
            {
                  // Add the full item's value
                  // Ratio * Weight = Original Value
                  Max_value += unit[i].first * unit[i].second;

                  // Decrease the remaining capacity
                  W -= unit[i].second;
            }
            else
            {
                  // Take only the fraction that fits in the remaining capacity
                  Max_value += unit[i].first * W;

                  // The knapsack is full, so stop
                  break;
            }
      }

      // Return the maximum total value
      return Max_value;
}

int main()
{
      // Maximum capacity of the knapsack
      int w = 15;

      // Weights of the available items
      vector<int> wight{8, 9, 7};

      // Values of the available items
      vector<int> values{100, 20, 70};

      // Call the function and print the result
      cout << knapSack(w, wight, values);
}
