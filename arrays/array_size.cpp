#include <iostream>
using namespace std;

// Size of an array
int main() {
    int arr[10]; // Declare an array of size 10
    cout << "Size of the array: " << sizeof(arr) << " bytes" << endl; // Output the size in bytes
    cout << "Number of elements in the array: " << sizeof(arr) / sizeof(arr[0]) << endl; // Output the number of elements
    return 0;
}