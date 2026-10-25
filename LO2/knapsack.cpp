#include <iostream>
#include <vector>
    using namespace std;

// Recursive function to find the maximum value
// that can be carried in the knapsack
int knapSack(int W, vector<int> wight, vector<int> value, int index)
{

      // Base case: no items left or no remaining capacity
      if (index < 0 || W <= 0)
            return 0;

      // If the current item's weight is less than W,
      // take the item and continue with the remaining capacity
      if (wight[index] < W)
      {
            return value[index] + knapSack(W - wight[index], wight, value, index - 1);
      }

      // Take the current item and add its value
      int take = value[index] + knapSack(W - wight[index], wight, value, index - 1);

      // Skip the current item and keep the same capacity
      int skip = knapSack(W, wight, value, index - 1);

      // Return the maximum value between taking and skipping
      return max(take, skip);
}

int main()
{
      int w = 15;

      // Weights of the available items
      vector<int> wight{8, 9, 7};

      // Values of the available items
      vector<int> values{100, 20, 70};

      // Start from the last item and print the result
      cout << knapSack(w, wight, values, values.size() - 1);
}
