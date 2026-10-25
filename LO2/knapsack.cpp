#include <iostream>
#include <vector>
using namespace std;

int knapSack(int W,vector<int> wight,vector<int> value,int index){
      if (index<0 || W<=0)return 0;

      if (wight[index]<W){
            return value[index] + knapSack(W - wight[index], wight, value, index - 1);
      }

      int take = value[index] + knapSack(W - wight[index], wight, value, index - 1);
      int skip = knapSack(W, wight, value, index - 1);

      return max(take,skip);
}

int main (){
      int w = 15;
      vector <int> wight {8,9,7};
      vector <int> values {100,20,70};

      cout << knapSack(w,wight,values,values.size()-1);
}