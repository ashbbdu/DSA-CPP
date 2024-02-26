int main () {
int arr[] = {13,46,24,52,20,9};
int n = sizeof(arr) / sizeof(arr[0]);

// for(int i = 0; i <= n-2 ; i++) {
//     int mini = i;
//     for(int j = i ; j <= n -1 ; j++) {
//         if(arr[mini] > arr[j]){
//             mini = j;
//         }
//     }
//     swap(arr[mini] , arr[i]);
// }

// or

for(int i = 0; i < n-1 ; i++) {
    int mini = i;
    for(int j = i ; j <  n  ; j++) {
        if(arr[mini] > arr[j]){
            mini = j;
        }
    }
    // swap(arr[mini] , arr[i]);
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
}



// Printing the array
 for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
 }
}

