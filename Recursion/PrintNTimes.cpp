#include <iostream>
using namespace std;

int cnt = 0;
void print(int n) {
    if(cnt >= n) {
        return;
    } else {
        cout << "Ashish" << endl;
        cnt++;
        print(n);
    }
//    if(cnt < n) {
// 		cout << "Coding Ninjas" << " ";
//         cnt++;
//         print(n);
//     } 
}

int main () {
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    print(n);
}