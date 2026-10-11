// the problem link:https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=binary-search
#include <iostream>
#include <vector>
using namespace std;

int insert_position(int left, int right, vector<int> &nums, int target)
{
      if (left > right)
            return left;
      int mid = left + (right - left) / 2;

      if (nums[mid] == target)
            return mid;
      else if (nums[mid] < target)
            return insert_position(mid + 1, right, nums, target);
      else
            return insert_position(mid + 1, right, nums, target);
}

int main()
{
      vector<int> nums{1, 4, 6, 7, 8, 9, 12, 56, 100};
      int target = 3;
      int index = insert_position(0, nums.size() - 1, nums, target);
      if (index == -1)
      {
            cout << "we didn't found the target";
      }
      else
      {
            cout << "We found the target at index: " << index;
      }
}