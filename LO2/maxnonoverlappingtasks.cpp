#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
    return a.second < b.second;
}

int maxNonOverLappingTasks(vector<pair<int,int>>& tasks){
    sort(tasks.begin(),tasks.end(),compare);
    int currendtime = 0;
    int count = 0;
    for (auto i : tasks){
        if(i.first>=currendtime){
            count++;
            currendtime=i.second;
        }
    }
    return count ;
}

int main(){
    vector <pair<int,int>> tasks{
        {1,3},
        {2,5},
        {3,9},
        {6,8},
        {5,7}
    };

    cout << "max number of non overlapping tasks: "<< maxNonOverLappingTasks(tasks);

}