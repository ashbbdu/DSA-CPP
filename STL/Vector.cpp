#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
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

    vector<int>::iterator it = a.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;

    cout << *(it) << " ";

    cout << endl;

    cout << *(a.end()) << " end" << endl; // this is not the last elem last elem will be a.end() - 1

    // Looping using iterator
    for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // erasing from vector

    vector<int> arr(5, 10);
    arr.push_back(20);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr.erase(arr.end() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr.erase(arr.begin(), arr.begin() + 2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // Inserting into vector

    arr.insert(arr.begin(), 12);
    arr.insert(arr.end(), 30);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // insterting multiple elements
    arr.insert(arr.begin() + 2, 2, 5);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}