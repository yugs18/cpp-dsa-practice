#include <iostream>
#include <vector>
using namespace std;

// Function to move all zeros to the end of the array
void move_zeros(vector<int>& arr) {
    int n = arr.size();
    int count = 0; // Count of non-zero elements

    // Traverse the array and move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    // Fill the remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

// using swapping method
// Function to move all zeros to the end of the array using swapping
void move_zeros_swapping(vector<int>& arr) {
    int n = arr.size();
    int j = 0; // Pointer for the position of the next non-zero element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap the current element with the next non-zero element
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// Function to print the array
void print_array(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function to test the move_zeros function
int main() {
    vector<int> arr = {0, 1, 0, 3, 22, 0, 12, 0, 0, 5};
    
    cout << "Original array: ";
    print_array(arr);
    
    move_zeros(arr);
    cout << "Array after moving zeros to the end: ";
    print_array(arr);
    
    // Resetting the array for the swapping method
    arr = {0, 1, 0, 3, 12, 0, 22, 0, 0, 5};
    
    move_zeros_swapping(arr);
    cout << "Array after moving zeros to the end using swapping: ";
    print_array(arr);
    
    return 0;
}