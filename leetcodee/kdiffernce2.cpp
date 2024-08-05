#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

set<pair<int, int>> kdiffernceTwoPointer(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;
    int i = 0;
    int j = 1;
    
    while (j < arr.size()) {
        if (i == j) { // Ensure j is always ahead of i
            j++;
            continue;
        }

        int diff = arr[j] - arr[i];
        if (diff == k) {
            ans.insert({arr[i], arr[j]});
            ++i;
            ++j;
        } else if (diff > k) {
            i++;
        } else {
            j++;
        }
    }
    
    return ans;
}

int main() {
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;
    set<pair<int, int>> ans = kdiffernceTwoPointer(arr, k);
    
    cout << "Pairs with difference " << k << ":" << endl;
    for (const auto& pair : ans) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    
    return 0;
}
