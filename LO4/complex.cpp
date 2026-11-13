
#include <iostream>
#include <complex>
using namespace std;

// Function to add two complex numbers
void subcomplex(complex<double> a, complex<double> b)
{

      // Calculate and print the sum of the real parts
      cout << a.real() + b.real() << " + ";

      // Calculate and print the sum of the imaginary parts
      cout << a.imag() + b.imag() << "i" << endl;

      // Add the two complex numbers directly using the + operator
      cout << a + b;
}

int main()
{

      // Initialize the first complex number (1 + 2i)
      complex<double> a = {1, 2};

      // Initialize the second complex number (6 + 9i)
      complex<double> b = {6, 9};

      // Call the function to add the two complex numbers
      subcomplex(a, b);
}
