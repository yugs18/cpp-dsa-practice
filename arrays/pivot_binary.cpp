#include <iostream>
using namespace std;

/*
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.
*/
// We will using binary search to find the pivot index.

int pivotIndex(int arr[], int n) {
    int leftsum = 0, rightsum = 0;

    // Toatl sum of the arry
    for (int i = 0; i < n; i++) {
        rightsum += arr[i];
    }

    for(int i = 0; i < n; i++) {
        rightsum -= arr[i]; // Sub current element
        if (leftsum == rightsum) return i;
        leftsum += arr[i];
    }
    return -1; // No pivot index found
}

int main() {
    int arr[] = {7, 9, 1, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = pivotIndex(arr, n);
    
    if (pivot != -1) {
        cout << "Pivot index is: " << pivot << endl;
    } else {
        cout << "No pivot index found." << endl;
    }
    
    return 0;
}