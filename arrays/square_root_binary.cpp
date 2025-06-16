#include <iostream>
using namespace std;

// Find the square root of a number using binary search
int square_root(int n) {
    if (n < 0) {
        throw invalid_argument("Negative input is not allowed.");
    }

    if (n == 0 || n == 1) {
        return n;
    }

    int left = 0, right = n;
    int result = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int square = mid * mid;
        if (square == n) return mid;
        else if (square < n) {
            result = mid, left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

// Function to add precision to the result
double precision(int n, int precision, int result) {
    double factor = 1;
    double answer = result;
    for (int i = 0; i < precision; i++) {
        factor /= 10;
        for (double j = answer; j * j < n; j += factor) {
            answer = j;
        }
    }
    return answer;
}

int main() {
    int n;
    cout << "Enter a number to find its square root: ";
    cin >> n;

    try {
        int result = square_root(n);
        int precision_level = 5; // Define the precision level
        double precise_result = precision(n, precision_level, result);
        cout << "The square root of " << n << " is approximately: " << precise_result << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    return 0;
}