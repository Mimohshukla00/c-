#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start;
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        return findPeakElement(arr);
    }
};

int main() {
    Solution solution;
    vector<int> arr{0, 2, 1, 0};
    int peakIndex = solution.peakIndexInMountainArray(arr);
    cout << "Peak index in mountain array: " << peakIndex << endl;
    return 0;
}
