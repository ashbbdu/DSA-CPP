#include <iostream>
using namespace std;

int cnt = 1;
 int fact = 1;
int print (int n) {
   
    if(cnt <= n) {
        fact = fact * cnt;
        cnt++;
        print(n);
    } 
    return  fact;
}

int main () {
 cout <<  print(10) ;  
}