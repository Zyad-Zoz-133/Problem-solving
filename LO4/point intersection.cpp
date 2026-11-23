#include <iostream>

using namespace std;

// Check the position of a point relative to a line
void p(double m, double c, double x, double y)
{

    // Calculate the y-coordinate of the line at the given x
    double res = x * m + c;

    // Check if the point lies exactly on the line
    if (y == res)
        cout << "The point intersects with the line";

    // Check if the point is above the line
    else if (y < res)
        cout << "The point is above the line";

    // Otherwise, the point is below the line
    else
        cout << "The point is under the line";
}

int main()
{

    // Test the function with predefined values
    p(3, 2, 1, 5);

    // Declare variables to store user input
    double m, c, x, y;

    // Get the line and point coordinates from the user
    cout << "Enter the variables (m, c, x, y):  ";
    cin >> m >> c >> x >> y;

    // Check the position of the entered point
    p(m, c, x, y);
}