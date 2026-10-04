// the problem link :https://leetcode.com/problems/subsets/description/
#include <iostream>
#include <vector>
using namespace std;

bool complete_Search(int target,vector<int>vec) {
	for (int i = 0; i < vec.size() - 2; i++) {
		for (int j = 1; j < vec.size()-1; j++)
		{
			for (int k = 2; k < vec.size(); k++) {
				if (vec[i] + vec[j] + vec[k])return true;
			}
		}
	}
	return false;
}

int main() {

	vector<int> vec{ 1,2,4,6,8 };
	int n = 14;

	cout << (complete_Search(n, vec)?"found":"not found");
}
