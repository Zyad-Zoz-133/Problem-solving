#include <iostream>
#include <vector>
using namespace std;

void merge(int left, int right, int mid, vector<int> &nums)
{
      int i = left;
      int j = mid + 1;
      vector<int> temp;

      while (i <= mid && j <= right)
      {
            if (nums[i] < nums[j])
            {
                  temp.push_back(nums[i]);
                  i++;
            }
            else
            {
                  temp.push_back(nums[j]);
                  j++;
            }
      }
      while (j <= right)
      {
            temp.push_back(nums[j]);
            j++;
      }
      while (i <= mid)
      {
            temp.push_back(nums[i]);
            i++;
      }

      for (int k = 0; k < temp.size(); k++)
      {
            nums[left + k] = temp[k];
      }
}

void mergeSort(int left, int right, vector<int> &nums)
{
      if (left >= right)
            return;

      int mid = left + (right - left) / 2;

      mergeSort(left, mid, nums);
      mergeSort(mid + 1, right, nums);

      merge(left, right, mid, nums);
}

int main()
{
      vector<int> nums = {
          -15, 42, 0, 8, -3, 42, 17,
          -99, 5, 0, 31, -15, 72, 1};


      cout << "Before sorting: ";
      for (int x : nums)
      {
            cout << x << " ";
      }

      mergeSort(0, nums.size() - 1, nums);

      cout << "\nAfter sorting: ";
      for (int x : nums)
      {
            cout << x << " ";
      }

      return 0;
}