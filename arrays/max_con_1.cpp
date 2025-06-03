#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 0, 1};
    int maxCount = 0, currentCount = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            currentCount++;
        } else {
            currentCount = 0; // Reset count when a 0 is encountered
        }
        maxCount = max(maxCount, currentCount);
    }
    cout << "Maximum consecutive 1s: " << maxCount << endl;
    return 0;
}