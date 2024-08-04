#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr{1, 3, 4, 2, 2};
    sort(arr.begin(), arr.end());

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find and print the duplicate number
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << "Duplicate number: " << arr[i] << endl;
            break; // Exit the loop after finding the first duplicate
        }
    }

    return 0;
}
