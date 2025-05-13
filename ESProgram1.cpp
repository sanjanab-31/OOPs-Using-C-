#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    vector<int> values(n);
    int sum = 0, maxVal, minVal;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
        sum += values[i];

        if (i == 0) {
            maxVal = minVal = values[i];
        } else {
            maxVal = max(maxVal, values[i]);
            minVal = min(minVal, values[i]);
        }
    }

    cout << "\nSum: " << sum;
    cout << "\nMax: " << maxVal;
    cout << "\nMin: " << minVal;

    cout << "\nValues in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << values[i] << " ";
    }

    sort(values.begin(), values.end());

    cout << "\nValues in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }

    return 0;
}