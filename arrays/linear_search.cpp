#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 8, 57, 97, 45, 12, 67, 34, 89, 10};
    int key = 34; // Element to search for
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    bool found = false; // Flag to indicate if the element is found
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at index " << i << endl;
            found = true; // Set the flag to true if the element is found
            break; // Exit the loop since we found the element
        }
    }
    if (!found) {
        cout << "Element " << key << " not found in the array." << endl;
    }
}