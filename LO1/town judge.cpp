// The problem link : https://leetcode.com/problems/find-the-town-judge/description/?envType=problem-list-v2&envId=graph;

#include <iostream>
#include<vector>
using namespace std;

int find_judge(vector<vector <int>> trust) {
	int x = trust[0][1];
	for (auto i : trust) {
		if (x != i[1])return -1;
	}return x;
}

int main()
{
    //int n = 3;
	//vector<vector<int>> trust{
	//	{1,3},
	//	{2,3}
	//};

	//cout << find_judge(trust);

	//int n = 2;
	//vector<vector<int>> trust{
	//	{1,2}
	//};

	//cout << find_judge(trust);

	int n = 3;
	vector<vector<int>> trust{
		{1,3},
		{2,3},
		{3,1}
	};

	cout << find_judge(trust);
}
