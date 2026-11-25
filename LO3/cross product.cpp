#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string longgestCommonPrefix(vector<string> str){
    if(str.empty())
        return "The vector is empty";
    
    sort(str.begin(),str.end());
     
    string first = str[0];
    string last = str[str.size()-1];

    int count = 0;

    while(count<last.size()&& count < first.size()&&last[count]==first[count]){
        count ++;
    }

    return first.substr(0,count);

}

int main(){
    vector<string> word {"flower","flow","flight"};
    cout << "LCP : "<< longgestCommonPrefix(word);
}

