#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid;

    while(start <= end) {
        mid = start + (end - start) / 2; // To avoid overflow

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int even_len[8] = {2, 34, 45, 76, 89, 90, 100, 120};
    int odd_len[9] = {2, 34, 45, 76, 89, 90, 100, 120, 150};

    int index = binarySearch(even_len, 8, 100);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}