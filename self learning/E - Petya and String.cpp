// the problem link :https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
      string string1, string2;
      bool changed = false;

      cin >> string1;
      cin >> string2;

      transform(string1.begin(), string1.end(), string1.begin(),
                [](unsigned char c)
                { return tolower(c); });
      transform(string2.begin(), string2.end(), string2.begin(),
                [](unsigned char c)
                { return tolower(c); });

      for (int i = 0; i < string1.length(); i++)
      {
            if (string1[i] > string2[i])
            {
                  cout << "1";
                  changed = true;
                  break;
            }
            else if (string1[i] < string2[i])
            {
                  cout << "-1";
                  changed = true;
                  break;
            }
      }

      if(!changed){
            cout << "0";
      }
}