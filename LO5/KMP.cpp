#include <iostream>
#include <vector>
using namespace std;

vector<int> LPS(string pattern)
{
      int len = 0 ;
      int i = 1;
      int size = pattern.size();
      vector <int> lps (size,0);
      while(i<size){
            if(pattern[i]==pattern[len]){
                  lps[i++]=++len;
            }
            else{
                  if(len!=0){
                        len = lps[len-1];
                  }
                  else{
                        lps[i++]=0;
                  }
            }
      }
}