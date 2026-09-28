
   int main() {
       int n = 6;
       vector <vector<int>> edges =
 {
           {1,2},
           {1,3},
           {4,5},
           {5,6},
           {4,6}
 };
       if (hasCycle(n, edges))
           cout << "This Graph contains cycle";
       else
           cout << "There is no cycle";
   }
