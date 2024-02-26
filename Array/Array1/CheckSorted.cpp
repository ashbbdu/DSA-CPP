#include <iostream>
using namespace std;

int findSorted (int arr[] , int n) {
    //   for(int i =0 ; i < n ; i++) {
    //     if(arr[i+1] >= arr[i]) {
    //         return true;
    //     } 
    // }
    // return false;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {
            return 0;
        }
    }
    return 1;
   
}

int main () {
    // int arr[] = {1,2,2,3,4,5};
    int arr[] = {0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

   cout << findSorted(arr , n);
}