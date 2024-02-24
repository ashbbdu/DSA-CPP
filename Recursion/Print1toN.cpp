#include <iostream>
using namespace std;

// printint 1 to N using recursion

void print(int i , int n) {
    if(i <= n ) {
        cout << i << endl;
        i++;
        print(i , n);
    } else {
        return;
    }
}
    
int main () {
    int n = 5;
    print(1 , n);
}