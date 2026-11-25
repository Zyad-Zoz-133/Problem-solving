#include <iostream>
#include <cmath>
using namespace std;

// Problem Link: [Add the problem URL here]

// Calculate the intersection points between a line and a circle
void lineAndCircle(int m, int h, int c, int k, int r)
{

      // Coefficients of the quadratic equation
      double a = 1 + m * m;
      double b = 2 * m * (h - k) - 2 * c;
      double C = c * c + (h - k) * (h - k) - r * r;

      // Calculate the discriminant
      double d = (b * b) - (4 * a * C);

      // If the discriminant equals zero, the line is tangent to the circle
      if (d == 0)
      {

            cout << "The line intersects the circle at one point";

            // Calculate the intersection point
            double x = -b / (2 * a);
            double y = x * m + h;

            cout << " and the point is: (" << x << ',' << y << ')';
      }

      // If the discriminant is positive, there are two intersection points
      else if (d > 0)
      {

            cout << "The line intersects the circle at two points";

            // Calculate the first intersection point
            double x1 = (-b + sqrt(d)) / (2 * a);
            double y1 = x1 * m + h;

            // Calculate the second intersection point
            double x2 = (-b - sqrt(d)) / (2 * a);
            double y2 = x2 * m + h;

            // Display both intersection points
            cout << " and the points are: (" << x1 << ',' << y1 << ')';
            cout << " and (" << x2 << ',' << y2 << ')';
      }

      // If the discriminant is negative, there are no real intersection points
      else
      {
            cout << "The line and the circle have no intersection points";
      }
}

int main()
{
      // Line: y = mx + h
      int m = 0;
      int h = 5;

      // Circle center: (c, k), radius: r
      int c = 3;
      int k = 2;
      int r = 3;

      // Call the function
      lineAndCircle(m, h, c, k, r);

      return 0;
}