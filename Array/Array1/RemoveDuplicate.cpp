#include <iostream>
#include <set>
using namespace std;

int main () {
    int arr [] = {1,1,1,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    set<int> st;
    for(int i = 0; i< st.size() ;i++) {
       st.insert(arr[i]);
    }

       for(int i = 0; i< n ;i++) {
        cout << st[i];
    }

}