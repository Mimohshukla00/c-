#include <iostream>
#include <algorithm> // For std::min

using namespace std;

// Binary Search function
int binarySearch(int arr[], int start, int end, int x) {
    while (start <= end) {
        int mid = start + (end - start) / 2; // To prevent overflow
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

// Exponential Search function
int expoSearch(int arr[], int n, int x) {
    if (arr[0] == x) {
        return 0;
    }

    int i = 1;
    while (i < n && arr[i] <= x) {
        i *= 2;
    }

    return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
    // Array needs to be sorted for exponential search
    int arr[] = {3, 6, 11, 13, 14, 15, 45, 56, 70};
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int x = 13;

    int ans = expoSearch(arr, n, x);
    cout << ans << endl; // Output should be the index of x in the sorted array

    return 0;
}
