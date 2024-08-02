#include <iostream>
#include <vector>

using namespace std;

int nearlySortedArraySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (mid > start && arr[mid - 1] == target) { // Check mid-1 only if it's within the bounds
            return mid - 1;
        }
        if (mid < end && arr[mid + 1] == target) { // Check mid+1 only if it's within the bounds
            return mid + 1;
        }
        
        if (arr[mid] < target) {
            start = mid + 2; // Move right
        } else {
            end = mid - 2; // Move left
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> arr {20, 10, 40, 80, 60, 50};
    int target = 30;
    int ans = nearlySortedArraySearch(arr, target);

    if (ans != -1) {
        cout << "Element is present at index " << ans << endl;
    } else {
        cout << "Element is not present in the array" << endl;
    }

    return 0;
}
