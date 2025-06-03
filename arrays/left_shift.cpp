#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int shift = 4; // Number of positions to shift left
    int temp[shift];
    for (int i = 0; i < n; i++) {
        if (i < i + shift) {
            temp[i] = arr[i];
        }
        arr[i] = arr[i + shift];
        if (i >= n - shift) {
            arr[i] = temp[i - (n - shift)];
        }
    }
    cout << "Array after left shift: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}