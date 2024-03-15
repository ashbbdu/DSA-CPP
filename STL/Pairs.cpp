#include <iostream>
using namespace std;

int main () {
   pair <int , int> p = {1,3};
   cout << p.first << " " << p.second;
   cout << endl; 
   pair <int , pair <int , int>> a = {1 , {2,3}};
   cout << a.first << a.second.first << a.second.second;

   pair <int , string> z = {1 ,"ashish"};
   cout << endl; 
   pair <int , int> arr[] = {{1,2}, {3,4} ,{5,6}};
//    for(int i = 0 ; i < 3 ; i++) {
//     cout << arr[i].first << arr[i].second;
//    }
   cout << arr[1].first << " first"; 
}