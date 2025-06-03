#include <iostream>
#include <algorithm>
using namespace std;

int* input()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    return arr;
}

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, *arr;
    arr = input();
    n = sizeof(arr) / sizeof(arr[0]);

    // if (isSorted(arr, n))
    // {
    //     cout << "The array is sorted." << endl;
    // }
    // else
    // {
    //     cout << "The array is not sorted." << endl;
    // }

    if (is_sorted(arr, arr + n))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}