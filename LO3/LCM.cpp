#include <iostream>
using namespace std;

// LCM : Least common multiple

int GCD(int a, int b)
{
      if (b == 0)
            return a;
      return GCD(b, a % b);
}

int LCM (int a,int b){
      return (a*b)/GCD(a,b);
}

int main()
{
      int a = 18;
      int b = 48;

      cout <<"The LCM is :"<< LCM(a, b);
}