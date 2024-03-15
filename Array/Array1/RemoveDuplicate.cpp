#include <iostream>
#include <set>
using namespace std;

int removeDuplicate (int arr[] , int n , set <int> st) {
    int index = 0;
    for(auto it : st) {
        arr[index] = it;
        index++;
    }
    return index;
}

int main () {
    int arr [] = {1,1,1,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    set<int> st;
    cout << removeDuplicate(arr , n , st);
}