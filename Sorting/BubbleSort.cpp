#include <iostream>
using namespace std;

int main () {
int arr[] = {13,46,24,52,20,9};
int n = sizeof(arr) / sizeof(arr[0]);

for(int round = 0 ; round < n ; round++) {
    for(int j = 0 ; j < n - (round + 1 ); j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j+1] , arr[j]);
        }
    }
}

 for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
 }


}