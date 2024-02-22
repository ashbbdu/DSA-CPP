#include <iostream>
using namespace std;

int main () {
    int num = 153;
    int originalNumber = num;
    int dup = num;
    int sum = 0;
    int totalNum = 0;
    while(dup > 0) {
        totalNum++;
        dup = dup / 10;
    }
    while (num > 0)
    {
    int lastDigit = num % 10;
      sum = sum + pow(lastDigit , totalNum);
       num = num / 10;
    }
     if(sum == originalNumber){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }    
}