#include <iostream>
#include <vector>
using namespace std;

void isprime (int n){
      if (n<2){
            cout << "no prime number exists in this range";
            return;
      }

      // mark all number as prime

      vector<bool> prime(n+1,true);
       
      // 0 and 1  are always not prime

      prime[0]=prime[1]=false;

      for(int p = 2;p*p<=n;p++){
            if(prime[p]){
                  for (int i =p*p;i<=n;i+=p){
                        prime [i]=false;
                  }
            }
      }

      // print all  primes in the range 

      for (int i = 0; i <= n; i++)
      {
            if(prime[i]){
                  cout <<  i << " ";
            }
      }
      
      
}

int main (){
      int n = 20;
      isprime(n)       
}