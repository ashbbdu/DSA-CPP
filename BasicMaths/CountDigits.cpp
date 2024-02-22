#include <iostream>

using namespace std;

int main () {
    int totalDigit = 0;
   long long numb = 12345;
   while(numb > 0) {
    long long lastDigit = numb % 10;  // here in this case it is not required
    // cout << lastDigit << " ";
    // cout << endl;
    numb = numb / 10;
    // cout << numb << " " ;
    totalDigit++;
   }
   cout << totalDigit << endl;
}