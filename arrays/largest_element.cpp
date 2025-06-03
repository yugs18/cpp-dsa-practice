#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = INT16_MIN; // Initialize to the smallest possible integer
    for (int i = 0; i < n; i++) {
        
        largest = max(largest, arr[i]);
        // Alternatively, you can use a simple comparison:
        
        // if (arr[i] > largest) {
        //     largest = arr[i];
        // }
    }
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}
// This program finds the largest element in an array of integers.
// It prompts the user to enter the number of elements and the elements themselves,
// then iterates through the array to find and print the largest element.
// Note: This code uses variable-length arrays, which are not part of the C++ standard.
// For better portability, consider using `std::vector<int>` instead.