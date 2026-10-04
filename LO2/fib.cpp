// the problem link: https://leetcode.com/problems/fibonacci-number/description/
#include <iostream>
using namespace std;

int fib(int n) {
	if (n == 1)return 1;
	if (n == 0)return 0;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int n = 10;
	fib(n);
}

