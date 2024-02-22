#include <iostream>
using namespace std;

int main () {
    long long numb = 123;
    long long rev = 0 ;
    while (numb > 0)
    {
       int lastDigit = numb % 10;
        rev = (rev * 10) + lastDigit;
        numb = numb / 10;
    }
    cout << rev;   
}