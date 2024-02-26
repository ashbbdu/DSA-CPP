#include <iostream>
using namespace std;

int main () {
    // int arr[] = {-1,0,1, 10, 2, 4, 5,-2 ,  6, 8};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int mini = INT_MIN;
    // int second = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //    if (arr[i] > mini)
    //     {
    //         mini = arr[i];
    //     }
    // }
    // for(int i = 0 ; i < n ; i++) {
    //     if(arr[i] > mini && arr[i] != mini) {
    //         second = arr[i];
    //     }
    // }
    // cout << second << " second largest";


    // Self solution
    int arr[] = {-1,0,1,10 ,10, 2, 4, 5,-2 , 9,  6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = INT_MIN;
    for(int i = 0 ; i < n - 1 ; i++) {
        int minIndex = i;
        for(int j = i; j < n ;j++) {
            if(arr[minIndex] > arr[j] ){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
    // Printing the array
    //  for (int i = 0; i < n; i++) {
    //         cout << arr[i] << " " ;  
    //  }
    // finding the second largest
    int largestElem = arr[n - 1];
    // cout << largestElem;
    for (int i = 0; i < n - 1; i++) {
        if(mini < arr[i] && arr[i] != largestElem ){
            mini = arr[i];
        }
     }
     cout << mini << endl;
}