#include <iostream>
using namespace std;

// Find the missing number in an array of size n using XOR
// where the numbers are in the range from 0 to n
int find(int arr[], int n) {
    int xor_all = 0, xor_array = 0;

    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        xor_all ^= i;
    }

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor_array ^= arr[i];
    }

    // The missing number is the XOR of both results
    return xor_all ^ xor_array;
}

int main() {
    int arr[] = {0, 1, 2, 4, 5}; // Example array with a missing number
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int missing_number = find(arr, n);
    cout << "The missing number is: " << missing_number << endl;

    return 0;
}