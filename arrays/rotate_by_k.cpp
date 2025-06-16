#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate the array by k positions, either left or right
// This function assumes k is non-negative and less than the size of the array
// The rotation is done in-place using the reverse method
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();

    // Reverse the first part
    reverse(arr.begin(), arr.begin() + k);
    // Reverse the second part
    reverse(arr.begin() + k, arr.end());
    // Reverse the whole array
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2; // Number of positions to rotate
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Rotate the array
    rotateArray(arr, k);
    cout << "Array after rotating by " << k << " positions: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}