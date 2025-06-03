#include <iostream>
#include <vector>
using namespace std;

// Function to find the first and last position of a target in a sorted array
int firstPosition(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // Search in the left half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int lastPosition(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1; // Search in the right half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

pair<int, int> findFirstAndLast(const vector<int>& arr, int target) {
    return {firstPosition(arr, target), lastPosition(arr, target)};
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 2, 3, 4, 5, 7};
    int target = 2;

    pair<int, int> positions = findFirstAndLast(arr, target);
    cout << "First position: " << positions.first << ", Last position: " << positions.second << endl;

    int total_occurrences = positions.second - positions.first + 1;
    cout << "Total occurrences: " << total_occurrences << endl;

    return 0;
}