#include <iostream>
#include <vector>
using namespace std;

// Function to search in a rotated sorted array
int search(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // check if mid is the target
        if(arr[mid] == target) return mid;

        // Find the pivot point
        if (arr[left] <= arr[mid]) {
            // Left half is sorted
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            // Right half is sorted
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return -1; // Target not found
}

// Main function to test the search function
int main() {
    vector<int> arr = {3, 5, 9, 0, 1, 2};
    int target = 9;

    int result = search(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}