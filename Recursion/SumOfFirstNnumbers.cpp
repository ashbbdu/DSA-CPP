#include <iostream>
using namespace std;

int num = 1;
int sum = 0;
int print (int n) {

    if(num <= n) {
        sum = sum + num;
        num++;
        print(n);
    }
    return sum;
}

int main () {
   int total = print(5);
   cout << "Sum is " << total << endl;
}