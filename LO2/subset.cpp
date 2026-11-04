//#include <iostream>
//#include <vector>
//using namespace std;
//
//void generateSubset(int index, vector<int>& subset, vector<vector<int>>& res,vector<int>&nums) {
//	if (index == nums.size()) {
//		res.push_back(subset);
//		return;
//	}
//
//	generateSubset(index + 1, subset, res, nums);
//	subset.push_back(nums[index])
//	generateSubset(index + 1, subset, res, nums);
//	subset.pop_back();
//}
//
//int main(){}