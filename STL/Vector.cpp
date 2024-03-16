#include <iostream>
using namespace std;

int main () {
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    // a.emplace_back(2);
    // cout << a[1] << endl;

    // vector <int> b(4,100); //100 100 100 100
    //    vector <int> b(4); //0 0 0 0
    //    b.push_back(10);
    //     for (int i = 0; i < b.size(); i++) {
    //     cout << b[i] << " ";
    //     }
        // cout << endl;
        // vector <int> c(b);

        // cout << a.begin() << " address";

        // Iterators

        vector <int>::iterator it = a.begin();
        it++;
        cout << *(it) << " ";

        it= it+2;

        cout <<  *(it) << " ";

        cout << endl;

        cout << *(a.end()) << " end" << endl; // this is not the last elem last elem will be a.end() - 1


        // Looping using iterator
        for(vector<int>::iterator it = a.begin(); it != a.end(); it++) {
            cout << *(it) << " ";
        }
        cout << endl;
        for(auto it = a.begin() ; it != a.end() ; it++) {
            cout << *(it) << " ";
        }

        // erase

        

        
}