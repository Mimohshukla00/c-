#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Define the array and the target difference
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;
    
    // Loop through the array to find pairs
    bool pairFound = false; // Flag to check if a pair is found
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (abs(arr[i] - arr[j]) == k) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                pairFound = true;
            }
        }
    }

    // If no pair is found
    if (!pairFound) {
        cout << "No pairs found with difference " << k << endl;
    }

    return 0;
}
