#include <iostream>
using namespace std;

int main () {
    long long numb = 10;
    long long dup = numb;
    int rev = 0;
    while (numb > 0)
    {
        int lastDigit = numb % 10;
        rev = (rev * 10) + lastDigit;
        numb = numb / 10;
    }
    cout << rev;
    if(dup == rev) {
        cout << "Its a palindrome";
    } else {
         cout << "Its not a palindrome";
    }
    
}