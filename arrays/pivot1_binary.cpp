#include <iostream>
using namespace std;

// Find pivot index in an array
// The pivot index is where the point drops from increasing to decreasing

int pivot_point(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= arr[0]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = pivot_point(arr, n);
    cout << "Pivot index: " << pivot << endl;
    cout << "Pivot value: " << arr[pivot] << endl;
    return 0;
}