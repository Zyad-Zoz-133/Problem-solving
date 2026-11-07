// The problem link : https://leetcode.com/problems/find-the-town-judge/description/?envType=problem-list-v2&envId=graph;

#include <iostream>
#include <vector>
using namespace std;

// Finds the town judge based on the trust relationships
int find_judge(vector<vector<int>> trust)
{

	// Assume the second person in the first trust relationship is the judge
	int x = trust[0][1];

	// Check if all trust relationships point to the same person
	for (auto i : trust)
	{

		// If someone trusts a different person, there is no judge
		if (x != i[1])
			return -1;
	}

	// Return the possible judge
	return x;
}

int main()
{
	// Example 1
	// int n = 3;
	// vector<vector<int>> trust{
	//     {1,3},
	//     {2,3}
	// };

	// cout << find_judge(trust);

	// Example 2
	// int n = 2;
	// vector<vector<int>> trust{
	//     {1,2}
	// };

	// cout << find_judge(trust);

	// Example 3
	int n = 3;

	// Store the trust relationships between people
	vector<vector<int>> trust{
	    {1, 3},
	    {2, 3},
	    {3, 1}};

	// Print the result
	cout << find_judge(trust);
}