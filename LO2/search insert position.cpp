// the problem link:https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=binary-search
#include <iostream>
#include <vector>
using namespace std;

// Recursive Binary Search to find the target or its insert position
int insert_position(int left, int right, vector<int> &nums, int target)
{
      // Base case: Return the position where the target should be inserted
      if (left > right)
            return left;

      // Calculate the middle index
      int mid = left + (right - left) / 2;

      // Check if the target exists at the middle index
      if (nums[mid] == target)
            return mid;

      // Search in the left half if the target is smaller
      else if (nums[mid] > target)
            return insert_position(left, mid - 1, nums, target);

      // Search in the right half if the target is greater
      else
            return insert_position(mid + 1, right, nums, target);
}

int main()
{
      // Store the sorted array
      vector<int> nums{1, 4, 6, 7, 8, 9, 12, 56, 100};

      // Define the target value
      int target = 3;

      // Find the target index or its correct insert position
      int index = insert_position(0, nums.size() - 1, nums, target);

      // Print the result
      cout << "Insert position: " << index;
}