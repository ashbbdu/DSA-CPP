#include <iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Pattern 1" << endl;
    for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < n; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Pattern 2" << endl;
     for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < row + 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }

     cout << "Pattern 3" << endl;
     for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < row + 1; col++) {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
     cout << "Pattern 4" << endl;
     for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < row + 1; col++) {
            cout << row + 1 << " ";
        }
        cout << endl;
    }
}