#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int binarySearch(const vector<int>& arr, int start, int x) {
    int end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr{1, 1, 3, 4, 5};
    int k = 2;
    sort(arr.begin(), arr.end()); // Ensure the array is sorted

    set<pair<int, int>> ans;
    
    for (int i = 0; i < arr.size(); i++) {
        int target = arr[i] + k;
        // Perform binary search starting from i+1 to avoid finding the same pair twice
        if (binarySearch(arr, i + 1, target) != -1) {
            ans.insert(make_pair(arr[i], target));
        }
    }

    cout << "Number of pairs: " << ans.size() << endl;
    for (const auto& p : ans) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}
