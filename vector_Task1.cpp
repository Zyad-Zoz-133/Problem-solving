#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{

      // ========== Problem 8 ========== //

      // vector<int> vec;
      // int size_, input, target;
      // int left, right;
      // int index;
      // int mid;
      // bool found = false;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // cout << "Enter the target to search: ";
      // cin >> target;

      // sort(vec.begin(), vec.end());

      // left = 0;
      // right = vec.size() - 1;

      // while (left <= right)
      // {
      //       mid;
      //       mid = (left + right) / 2;
      //       if (vec[mid] == target)
      //       {
      //             index = mid;
      //             found = true;
      //             break;
      //       }

      //       if (vec[mid] > target)
      //       {
      //             right = mid - 1;
      //       }
      //       else
      //       {
      //             left = mid + 1;
      //       }
      // }

      // if (found)
      // {
      //       cout << "We found the number " << vec[mid];
      // }
      // else
      // {
      //       cout << "Don't fount the target in the vector.";
      // }

      // ========== Problem 9 ========== //

      // vector<int> vec;
      // int size_, input;
      // int left, right;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // cout << "Befor reversing the vector: ";
      // cout << "{";
      // for (int i : vec)
      // {
      //       if (i == vec[vec.size() - 1])
      //             cout << i;
      //       else
      //             cout << i << " ";
      // }
      // cout << "}";

      // cout << endl;

      // left = 0;
      // right = vec.size() - 1;

      // while (left <= right)
      // {
      //       swap(vec[left], vec[right]);
      //       left++;
      //       right--;
      // }

      // cout << "After reversing the vector: ";
      // cout << "{";
      // for (int i : vec)
      // {
      //       if (i == vec[vec.size() - 1])
      //             cout << i;
      //       else
      //             cout << i << " ";
      // }
      // cout << "}";

      // ========== Problem 10 ========== //

      // vector<int> vec;
      // int size_, input;
      // int left, right;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // vec.pop_back();

      // cout << "After deleting the last element: ";
      // cout << "{";
      // for (int i : vec)
      // {
      //       if (i == vec[vec.size() - 1])
      //             cout << i;
      //       else
      //             cout << i << " ";
      // }
      // cout << "}";

      // ========== Problem 11 ========== //

      // vector<int> vec;
      // int size_, input;
      // int left, right;
      // int target,counter=0;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // cout << "Enter the number U Want to count: ";
      // cin>>target;

      // for(int i:vec){
      //       if(i==target)counter++;
      // }

      // cout << "We found the number "<<counter<<" times.";

      // ========== Problem 12 ========== //

      // vector<int> vec;
      // int size_, input;
      // int left, right;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // left = 0;
      // right = vec.size() - 1;
      // bool palindrome= true;

      // while (left <= right)
      // {
      //       if (!(vec[left]==vec[right]))palindrome=false;
      //       left++;
      //       right--;
      // }

      // cout << (palindrome ? "it is a palindrome vector" : "it is not a palindrome vector");

      // ========== Problem 13 ========== //

      // vector<int> vec;
      // int size_, input;
      // int left, right;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // sort(vec.begin(),vec.end());
      // cout << "The second largest number is: "<< vec[vec.size()-2];

      // ========== Problem 14 ========== //

      // vector<int> vec;
      // int size_, input;
      // int left, right;

      // cout << "Enter the victor size: ";
      // cin >> size_;

      // for (int i = 0; i < size_; i++)
      // {
      //       cout << "Enter number " << i + 1 << ": ";
      //       cin >> input;
      //       vec.push_back(input);
      // }

      // for (int i = 0; i < vec.size(); i++)
      // {
      //       if (vec[i] == 0)
      //       {
      //             for (int j = i; j < vec.size(); j++)
      //             {
      //                   swap(vec[j], vec[j + 1]);
      //             }
      //       }
      // }

      // cout << "After shifting the zeros to the end: ";
      // cout << "{";
      // for (int i : vec)
      // {
      //       int counter = 0;
      //       if (counter == vec.size() - 1)
      //             cout << i;
      //       else
      //             cout << i << " ";
      //       counter++;
      // }
      // cout << "}";

      // ========== Problem 16 ========== //

      // vector<int> vec;
      // vector<int> vec2;
      // vector<int> vec3;
      // int size_, input;
      // int left, right;

      // for (size_t i = 0; i < 2; i++)
      // {
      //       cout << "Enter the victor number "<<i+1<< " size: ";
      //       cin >> size_;

      //       for (int i = 0; i < size_; i++)
      //       {
      //             cout << "Enter number " << i + 1 << ": ";
      //             cin >> input;
      //             vec.push_back(input);
      //       }
      // }

      // vec3.resize(vec.size()+vec2.size());

      // for (int i = 0; i < vec.size(); i++)
      // {
      //       vec3[i]=vec[i];
      // }
      
      // for (int i = 0; i < vec2.size(); i++)
      // {
      //       vec3[i]=vec2[i];
      // }

      // cout << "After merging the two vectors: ";
      // cout << "{";
      // for (int i : vec3)
      // {
      //       int counter = 0;
      //       if (counter == vec3.size())
      //             cout << i;
      //       else
      //             cout << i << " ";
      //       counter++;      
      // }
      // cout << "}";

      // ========== Problem 17 ========== //

      vector<int> vec;
      vector<int> vec2;
      int size_, input;
      int left, right;

      for (size_t i = 0; i < 2; i++)
      {
            cout << "Enter the victor number "<<i+1<< " size: ";
            cin >> size_;

            for (int i = 0; i < size_; i++)
            {
                  cout << "Enter number " << i + 1 << ": ";
                  cin >> input;
                  vec.push_back(input);
            }
      }


      
      
     

      cout << "the common elements: ";
      cout << "{";
      int counter = 0;
      for (int i : vec)
      {
            for(int y:vec2){

                  if(i==y){
                  if (counter == vec.size())
                        cout << i;
                  else
                        cout << i << " ";
                  counter++;
                  }
            }
      }
      cout << "}";
}