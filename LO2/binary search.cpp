//#include <iostream>
//#include <vector>
//using namespace std;
//
//int binarySearch(int left, int right, int target, vector<int> nums) {
//	if (right < left)return -1;
//
//	int mid = left + (right - left) / 2;
//
//	if (nums[mid] == target)return mid;
//	else if (target > nums[mid])return binarySearch(mid + 1, right, target, nums);
//	else if (target < nums[mid])return binarySearch(left,mid - 1, target, nums);
//}
//
//int main() {
//	vector <int> nums{ 1,3,4,5,6,8 };
//
//	int target = 3;
//
//	cout << (binarySearch(0, vec.size() - 1, target, nums) == -1 ? "the target doesn't exset" : "we found the target";
//
//}