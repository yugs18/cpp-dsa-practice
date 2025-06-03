#include <iostream>
//#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the element to fill the array with: ";
    cin >> n;

    int arr[10];
    fill_n(arr, 10, n);
    cout << "The array filled with " << n << " is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
// Please note that this code uses the fill_n function from the <algorithm> header, which is part of the C++ Standard Library.
// The fill_n function fills the first n elements of the array with the specified value.
// The code is designed to work with the C++14 standard, which supports the features used here.