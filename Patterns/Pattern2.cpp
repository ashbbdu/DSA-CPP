#include <iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Pattern 1" << endl;
    for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < n - row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Pattern 2" << endl;
    for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < n - row; col++) {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
  cout << "Pattern 3" << endl;
    for(int row = 0 ; row < n ; row++) {
        // gaps
        for(int col = 0; col < n - (row + 1); col++) {
            cout << " ";
        }
         for(int col = 0; col < 2*row+1 ; col++) {
            cout << "*";
        }
        cout << endl;
    }
     cout << "Pattern 4" << endl;
    for(int row = 0 ; row < n ; row++) {
        // gaps
        for(int col = 0; col < row ; col++) {
            cout << " ";
        }
         for(int col = 0; col <  2*n -(2*row +1) ; col++) {
            cout << "*";
        }
        cout << endl;
    }

     cout << "Pattern 5" << endl;
    int num = 1;
    for(int row = 0 ; row < n ; row++) {
        for(int col = 0; col < row + 1 ; col++) {
          cout<<num<<" ";
          num =num+1;
        }
        cout << endl;
    }
     cout << "Pattern 6" << endl;  //code not working
    int start = 1;
    for(int row = 0 ; row < n ; row++) {
        if(start % 2 == 0) {
            start = 1;
        } else {
            start = 0;
        }
        for(int col = 0; col < row + 1 ; col++) {
            cout << start << " ";
             start = 1 - start;
        }
        cout << endl;
    }

    cout << "Pattern 14" << endl;  
    for(int row = 0 ; row < n ; row++) {
          char ch = 'A';
        for(int col = 0; col < row + 1 ; col++) {
          cout << ch;
          ch++;
        }
        cout << endl;
    }

     cout << "Pattern 15" << endl;  

    for(int row = 0 ; row < n ; row++) {
        char ch = 'A';
        for(int col = 0; col < n-row ; col++) {
            // cout << 'A' + col;  
          cout << ch;
          ch++;
        }
        cout << endl;
    }
     cout << "Pattern 16" << endl;  

    for(int row = 0 ; row < n ; row++) {
        char ch = 'A' + row;
        for(int col = 0; col < row + 1 ; col++) {
            cout << ch;    
        }
        cout << endl;
    }

      cout << "Pattern 18" << endl;  

    // for(int row = 0 ; row < n ; row++) {
    //     char ch = 'A' + (n -1);
    //     for(int col = 0; col < row + 1 ; col++) {
           
    //         cout << ch;  
    //         ch = ch + 1 ; 
             
    //     }
    //     cout << endl;
    // }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            cout << static_cast<char>('A' + n - row + col - 1) << " ";
        }
        cout << endl;
    }

       for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            cout << static_cast<char>('A' + row+1) << " ";
        }
        cout << endl;
    }
}