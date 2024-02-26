#include <iostream>
using namespace std;

int main()
{
    
    // Self solution
    int arr[] = {4, 3, 2, 1, 2, 1, 4, 2, 4, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // finding the second largest
    int largestElem = arr[n - 1];
    // cout << largestElem;
    for (int i = 0; i < n - 1; i++)
    {
        if (mini < arr[i] && arr[i] != largestElem)
        {
            mini = arr[i];
        }
    }

    // second smallest
    int smallest = arr[0];
    int maxi = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if (maxi > arr[i] && arr[i] != smallest)
        {
            maxi = arr[i];
            break;
        }
    }
    cout << mini << " " << maxi << endl;
}