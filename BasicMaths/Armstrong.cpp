#include <iostream>
using namespace std;

int main () {
    int num = 153;
    int dup = num;
    int sum = 0;
    while (num > 0)
    {
       int lastDigit = num % 10;
       sum = sum + (lastDigit * lastDigit * lastDigit);
       num = num / 10;
    }
     if(sum == dup){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }    
}