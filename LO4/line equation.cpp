
#include <iostream>
using namespace std;

// Calculates the equation of a straight line using two points
void leanerEquation(pair<int, int> point1, pair<int, int> point2)
{
      // Check if both points are identical
      if (point1 == point2)
      {
            cout << "Both points are identical!" << endl;
            return;
      }

      // Check if the line is vertical (both points have the same x-coordinate)
      if (point1.first == point2.first)
      {
            cout << "Vertical line: x = " << point1.first << endl;
            return;
      }

      // Calculate the slope using the formula: m = (y2 - y1) / (x2 - x1)
      double slope = (double)(point1.second - point2.second) / (point1.first - point2.first);

      // Calculate the y-intercept using the formula: c = y - mx
      double Const = (double)point1.second - slope * point1.first;

      // Print the equation of the line in the form: y = mx + c
      cout << "y = " << slope << "x + " << Const << endl;

      // Display the slope of the line
      cout << "the slope of the line is: " << slope << endl;

      // Display the y-intercept of the line
      cout << "the y-intercept of the line is: " << Const << endl;
}

int main()
{
      // Define the first point (x1, y1)
      pair<int, int> p1 = {1, 7};

      // Define the second point (x2, y2)
      pair<int, int> p2 = {3, 7};

      // Calculate and display the equation of the line
      leanerEquation(p1, p2);
}
