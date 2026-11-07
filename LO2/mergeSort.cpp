// Problem link: https://leetcode.com/problems/sort-an-array/

#include <iostream>
#include <vector>
using namespace std;

// Merges two sorted halves into one sorted array
void merge(int left, int right, int mid, vector<int> &nums)
{
      // Initialize pointers for both halves
      int i = left;
      int j = mid + 1;

      // Temporary array to store the merged elements
      vector<int> temp;

      // Compare elements from both halves and add the smaller one
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

      // Add the remaining elements from the right half
      while (j <= right)
      {
            temp.push_back(nums[j]);
            j++;
      }

      // Add the remaining elements from the left half
      while (i <= mid)
      {
            temp.push_back(nums[i]);
            i++;
      }

      // Copy the sorted elements back into the original array
      for (int k = 0; k < temp.size(); k++)
      {
            nums[left + k] = temp[k];
      }
}

// Recursive function to sort the array using Merge Sort
void mergeSort(int left, int right, vector<int> &nums)
{
      // Base case: Stop when the subarray contains one or zero elements
      if (left >= right)
            return;

      // Calculate the middle index to divide the array
      int mid = left + (right - left) / 2;

      // Sort the left half
      mergeSort(left, mid, nums);

      // Sort the right half
      mergeSort(mid + 1, right, nums);

      // Merge both sorted halves
      merge(left, right, mid, nums);
}

int main()
{
      // Store the elements to be sorted
      vector<int> nums = {
          -15, 42, 0, 8, -3, 42, 17,
          -99, 5, 0, 31, -15, 72, 1};

      // Print the array before sorting
      cout << "Before sorting: ";
      for (int x : nums)
      {
            cout << x << " ";
      }

      // Sort the array using Merge Sort
      mergeSort(0, nums.size() - 1, nums);

      // Print the array after sorting
      cout << "\nAfter sorting: ";
      for (int x : nums)
      {
            cout << x << " ";
      }

      return 0;
}