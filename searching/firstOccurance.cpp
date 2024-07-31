#include<iostream>
#include<vector>

using namespace std;

int firstOccurrence(const vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int indexOfTarget = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            indexOfTarget = mid;
            end = mid - 1; // Move left to find the first occurrence
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return indexOfTarget;
}

int main() {
    vector<int> arr{10, 20, 20, 20, 30};
    // cout<<arr.size();
    
    int target = 20;
    int indexOfTarget = firstOccurrence(arr, target);
    cout << "The first occurrence of the target value is: " << indexOfTarget << endl;
    return 0;
}
