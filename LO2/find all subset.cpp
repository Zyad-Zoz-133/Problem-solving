#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(int indx, vector<int> &subset, vector<vector<int>> &RES, vector<int> &nums)
{

      if (indx == nums.size())
      {
            RES.push_back(subset);
            return;
      }

      generateSubsets(indx + 1, subset, RES, nums);
      subset.push_back(nums[indx]);
      generateSubsets(indx + 1, subset, RES, nums);
      subset.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
      vector<vector<int>> RES;
      vector<int> subset;

      generateSubsets(0, subset, RES, nums);

      return RES;
}

int main()
{
      vector<int> nums = {1, 2, 3};
      vector<vector<int>> result = subsets(nums);

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