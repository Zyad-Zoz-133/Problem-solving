// the problem link :https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

      int n ;
      cout << "Enter the n :";
      cin>>n;

      vector <string> words;

      if (n>=1&& n<=100){
            for (int i = 0; i < n; i++)
            {
                  string word1;
                  cin >> word1;
                  words.push_back(word1);
            }

            for (string word : words)
            {
                  if (word.length() > 10)
                  {
                        cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
                  }
                  else
                  {
                        cout << word << endl;
                  }
            }
      }
           
      
}