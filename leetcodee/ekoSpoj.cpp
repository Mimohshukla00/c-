#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it is possible to collect at least 'requiredWood' units of wood
// when the saw blade is set at height 'cutHeight'.
bool isPossible(vector<long long> &trees, long long requiredWood, long long cutHeight) {
    long long woodCollected = 0;
    for (long long treeHeight : trees) {
        if (treeHeight > cutHeight) {
            woodCollected += treeHeight - cutHeight;
        }
    }
    return woodCollected >= requiredWood;
}

// Function to find the maximum height at which to set the saw blade to collect at least 'requiredWood' units of wood.
long long maxSawBladeHeight(vector<long long> &trees, long long requiredWood) {
    long long start = 0;
    long long end = *max_element(trees.begin(), trees.end());
    long long optimalHeight = -1;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        if (isPossible(trees, requiredWood, mid)) {
            optimalHeight = mid;
            start = mid + 1; // Try for a higher cut height
        } else {
            end = mid - 1; // Try for a lower cut height
        }
    }

    return optimalHeight;
}

int main() {
    long long numberOfTrees, requiredWood;
    
    // Read the number of trees
    cout<<"number of trees:";

    cin >> numberOfTrees;

    // required amount of wood

    cout<<"amount of wood:in (m):";
    cin >> requiredWood;
    
    // Vector to store the heights of the trees
    vector<long long> treeHeights(numberOfTrees);
    
    // Read the heights of the trees
    for (long long i = 0; i < numberOfTrees; ++i) {
        cin >> treeHeights[i];
    }
    
    // Output the maximum saw blade height
    cout << maxSawBladeHeight(treeHeights, requiredWood) << endl;

    return 0;
}
