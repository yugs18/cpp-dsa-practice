#include <iostream>
using namespace std;

// Function to remove duplicates from a sorted array
int remove(int arr[], int n) {
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i]; // Move the unique element to the next position
        }
    }
    return j + 1; // Return the new length of the array
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = remove(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}