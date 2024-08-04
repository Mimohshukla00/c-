#include <iostream>
#include <vector>

using namespace std;

int duplicateNumber(vector<int>& arr) {
    int i = 0;
    while (i < arr.size()) {
        if (arr[i] != i + 1) {
            if (arr[i] == arr[arr[i] - 1]) {
                return arr[i];
            }
            swap(arr[i], arr[arr[i] - 1]);
        } else {
            i++;
        }
    }
    return -1; // This line is theoretically unreachable with the given problem constraints.
}

int main() {
    vector<int> arr{2, 3, 4, 5, 3};
    int ans = duplicateNumber(arr);
    cout << ans << endl;
    return 0;
}
