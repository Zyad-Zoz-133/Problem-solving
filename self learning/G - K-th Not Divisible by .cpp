// the problem link : https://codeforces.com/problemset/problem/1352/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<long long> nums;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long answer = k + (k - 1) / (n - 1);

        nums.push_back(answer);
    }

    for (long long i : nums) {
        cout << i << '\n';
    }

    return 0;
}