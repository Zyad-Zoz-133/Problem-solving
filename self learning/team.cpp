// the problem link :https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;

int main(){
      int n ;
      int solve_count;
      cin>> n ;

      for (int i = 0; i < 2; i++)
      {
            int sure [3];
            cin >> sure[0]>> sure[1]>> sure[2];
            int count;
            for(int i:sure){
                  if(i==1)count++;
            }
            if(count>=2)solve_count++;

      }
      cout << solve_count;
}