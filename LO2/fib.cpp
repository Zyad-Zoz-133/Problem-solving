// the problem link: https://leetcode.com/problems/fibonacci-number/description/
#include <iostream>
#include <vector>
using namespace std;

// ============== first solution ================== //

long long fib(int n) {
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

// ============== second solution (Dynamic programing memo) ================= //

long long fibMemo(int n, vector <long long>& memo){
	if (n <= 1)
		return n;

	if(memo[n]!=-1)
		return memo[n];
	else
		memo[n]= fibMemo(n-1,memo)+ fibMemo(n-2,memo);
	
	return memo[n];
}

// ============== third solution (Dynamic programing tabo) ================= //

long long fibTabo(int n, vector<long long> &tabo)
{
	if (n <= 1)
		return n;

	tabo[0]=0;
	tabo[1]=1;

	for (int i = 2 ; i<=n ; i++){
		tabo[i]=tabo[i-1]+tabo[i-2];
	}

	return tabo[n];
}

int main() {
	int n = 10;
	
	cout << "The first solution : "<< fib(n) << endl;


	vector <long long> memo (n+1, -1);
	cout << "the seconed solution : " << fibMemo(n,memo) << endl;

	vector<long long> tabo(n + 1);
	cout << "the third solution : " << fibTabo(n, tabo) << endl;
}

