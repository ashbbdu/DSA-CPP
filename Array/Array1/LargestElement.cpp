#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1,0,1, 10, 2, 4, 5,-2 ,  6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > mini)
        {
            mini = arr[i];
        }
    }
    cout << mini << "elme";
}