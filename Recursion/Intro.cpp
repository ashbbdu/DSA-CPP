#include <iostream>
using namespace std;

int cnt = 1;
int cnt1 = 1;

void f () {
    if(cnt == 5) {
        return;
    } else {
    cout << cnt << " " ;
    cnt++;
     f();
    }
   
}

vector <int> z () {
      vector <int> arr;
     if(cnt1 == 5) {
        return;
    } else {
      
    cout << cnt1 << " " ;
    cnt1++;
     f();
    arr.push_back(cnt1);
      
    }
  return arr;
}

int main () {
    f();
    z();
}