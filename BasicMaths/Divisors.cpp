#include <iostream>
using namespace std;

int main () {
    int num;
    int sum = 0;
    cout << "Enter a number !" << endl;
    cin >> num;
    for(int i =1 ; i <= num ; i++) {
        if(num % i == 0) {
            sum = sum + i;
        }
    }
    cout << sum;
}