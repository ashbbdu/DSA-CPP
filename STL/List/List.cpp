#include <iostream>
#include <list>
using namespace std;

int main () {
    list <int> ls;
    ls.push_front(1);
    ls.push_back(3);
    ls.push_front(0);
    cout << ls.size();
}