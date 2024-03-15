#include <iostream>
using namespace std;

int main () {
    vector <int> a;
    a.push_back(1);
    a.emplace_back(2);
    cout << a[1] << endl;
}