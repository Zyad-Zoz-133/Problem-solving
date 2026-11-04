// the problem link : https://codeforces.com/problemset/problem/580/A

#include <iostream>
#include <vector>
using namespace std;
int main(){
      vector<int> nums;
      int n ;
      cin >> n;
      int max_len = 1;
      int curr_len = 1;

      for (int i = 0; i < n; i++)
      {
            int input ;
            cin >> input;
            nums.push_back(input);  
      }
      
      for (int i = 1; i < nums.size(); i++)
      {
            if(nums[i]>=nums[i-1])curr_len++;
            else curr_len=1;
            max_len=max(max_len,curr_len);
      }

      cout << max_len;
      


}