#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main () {
    // Last in first out (LIFO)
    // swap
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout << st.top() <<  " " << st.size() << endl;

    // Queue
    // FIFO
    queue <int> qu;
    qu.push(10);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    cout << qu.front() << " " << qu.back() << endl;
    qu.pop();
    cout << qu.front() << " " << qu.back();
}