// the problem link : https://leetcode.com/problems/binary-search/description/
#include <iostream>
#include <vector>
using namespace std;

// Recursive Binary Search to find the target in a sorted array
int binarySearch(int left, int right, vector<int> &nums, int target)
{

      // Base case: Target is not found
      if (left > right)
            return -1;

      // Calculate the middle index
      int mid = left + (right - left) / 2;

      // Check if the middle element is the target
      if (nums[mid] == target)
            return mid;

      // Search in the right half if the target is greater
      else if (nums[mid] < target)
            return binarySearch(mid + 1, right, nums, target);

      // Search in the left half if the target is smaller
      else
            return binarySearch(left, mid - 1, nums, target);
}

int main()
{
      // Store the sorted elements
      vector<int> nums{1, 4, 6, 7, 8, 9, 12, 56, 100};

      // Define the target value
      int target = 3;

      // Call Binary Search and get the target index
      int index = binarySearch(0, nums.size() - 1, nums, target);

      // Check if the target was found
      if (index == -1)
      {
            cout << "we didn't found the target";
      }
      else
      {
            cout << "We found the target at index: " << index;
      }
}