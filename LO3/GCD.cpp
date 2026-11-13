#include <iostream>
using namespace std;

// GCD : Greatest common divisible

int GCD (int a,int b){
      if(b==0)return a;
      return GCD(b,a%b);          
}

int main (){
      int a = 18;
      int b = 48;
      cout << "The GCD is :" << GCD(a, b);
}