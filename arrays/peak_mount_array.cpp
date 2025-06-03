#include <iostream>
using namespace std;

// Function to find the peak element in an array using binary search
int findPeakElement(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        // Check if mid is greater than its next element
        if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
            // If mid is less than its next element, then the peak lies on the right side
            low = mid + 1;
        } else {
            // If mid is greater than or equal to its next element, then the peak lies on the left side or at mid
            high = mid;
        }
    }
    // When low meets high, we have found the peak element
    return low;
}

int main() {
    int arr[] = {1, 3, 20, 25, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peakIndex = findPeakElement(arr, n);
    cout << "Peak element is: " << arr[peakIndex] << " at index " << peakIndex << endl;

    return 0;
}