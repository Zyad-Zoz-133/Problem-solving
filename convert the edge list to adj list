#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void adj(vector<vector<int>> edge ) {
    int size = 4;
    vector<vector<int>> adj_ (size + 1);

    for (auto row: edge) {
        int First = row[0];
        int second = row[1];

        adj_[First].push_back(second);
        adj_[second].push_back(First);
    }

    cout << '{' << endl;
    for (auto row : adj_) {
            if (row.empty()) {
                continue;
            }
        cout << '{' ;
            for (int column:row) {
                if (column == row[row.size() - 1]) {
                cout << column ;
                }
                else {
                cout << column <<",";
                }
          }
            if (row == adj_[adj_.size() - 1]) {
                cout << "}";
            }
            else {
                cout << "}," << endl;
            }
        }

        cout <<endl<< '}' << endl;
}

int main()
{

    vector<vector<int>> edges{
        {1,3},
        {2,4},
        {1,2},
        {4,3}
    };

    adj(edges);
    



}
