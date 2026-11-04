#include <iostream>
using namespace std;

int main (){
      int w ;
      cin>> w;
      cout << (w >= 1 && w <= 100 && w % 2 == 0 ? "\nYes" : "\nno");
}