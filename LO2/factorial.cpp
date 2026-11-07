// Problem link: https://leetcode.com/problems/factorial-trailing-zeroes/

#include <iostream>
using namespace std;

// Recursive function to calculate the factorial of a number
long long factorial(int n)
{

      // Base case: The factorial of 1 is 1
      if (n == 1)
            return 1;

      // Recursive case: Multiply n by the factorial of (n - 1)
      return n * factorial(n - 1);
}

int main()
{

      // Define the number
      int n = 10;

      // Calculate and print the factorial
      cout << "The factorial of " << n << " = " << factorial(n);
}