// the problem link:https://leetcode.com/problems/subsets/description/
#include <iostream>
#include <vector>
using namespace std;

// Recursive function to generate all possible subsets
void generateSubsets(int indx, vector<int> &subset, vector<vector<int>> &RES, vector<int> &nums)
{
      // Base case: All elements have been processed
      if (indx == nums.size())
      {
            // Store the current subset in the result
            RES.push_back(subset);
            return;
      }

      // First choice: Exclude the current element
      generateSubsets(indx + 1, subset, RES, nums);

      // Second choice: Include the current element
      subset.push_back(nums[indx]);

      // Continue generating subsets with the current element included
      generateSubsets(indx + 1, subset, RES, nums);

      // Backtrack: Remove the last element to restore the previous state
      subset.pop_back();
}

// Generates all possible subsets of the given array
vector<vector<int>> subsets(vector<int> &nums)
{
      // Store all generated subsets
      vector<vector<int>> RES;

      // Store the current subset being constructed
      vector<int> subset;

      // Start the recursive process from index 0
      generateSubsets(0, subset, RES, nums);

      return RES;
}

int main()
{
      // Define the input array
      vector<int> nums = {1, 2, 3};

      // Generate all possible subsets
      vector<vector<int>> result = subsets(nums);

      // Print all generated subsets
      cout << "Subsets:\n";

      for (const auto &subset : result)
      {
            cout << "[ ";

            for (int num : subset)
                  cout << num << " ";

            cout << "]\n";
      }

      return 0;
}