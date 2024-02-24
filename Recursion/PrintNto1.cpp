#include <iostream>
using namespace std;

void print (int i, int n) {
    if(i <= n) {
        cout << n - i + 1  << endl;
        i++;
        print(i , n);
    } else {
        return;
    }
}

int main () {
    int n = 15;
    print(2 , n);
}