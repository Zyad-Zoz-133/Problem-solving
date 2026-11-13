#include<iostream>
using namespace std;

double power(double base,int pow){
      // the base case check if the pow = 0 return 1

      if(pow==0)return 1;

      // check if the power is -ve
      if(pow<0){
            base = 1/base;
            pow = -pow;
      }

      double temp = power (base,pow/2);

      if(pow&1==0)
            return temp*temp;
      else
            return temp*temp*temp;
}

int main (){
      int base = 5;
      int pow = -2;
      cout << power(base,pow);
}