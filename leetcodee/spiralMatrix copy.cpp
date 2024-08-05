#include <iostream>
#include <vector>
using namespace std;

// Function to return the spiral order of a matrix
vector<int> spiralMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size(); // Get the number of rows
    int cols = matrix[0].size(); // Get the number of columns
    int total_Elements = rows * cols; // Total number of elements in the matrix
    int startingCol = 0; // Initialize starting column index
    int endingCol = cols - 1; // Initialize ending column index
    int startingRow = 0; // Initialize starting row index
    int endingRow = rows - 1; // Initialize ending row index
    int count = 0; // Counter to keep track of the number of elements processed
    vector<int> ans; // Vector to store the elements in spiral order

    while (count < total_Elements) { // Loop until all elements are processed
        // Traverse from left to right
        for (int i = startingCol; i <= endingCol && count < total_Elements; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++; // Move to the next row

        // Traverse from top to bottom
        for (int i = startingRow; i <= endingRow && count < total_Elements; i++) {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--; // Move to the previous column

        // Traverse from right to left
        for (int i = endingCol; i >= startingCol && count < total_Elements; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--; // Move to the previous row

        // Traverse from bottom to top
        for (int i = endingRow; i >= startingRow && count < total_Elements; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++; // Move to the next column
    }
    return ans; // Return the spiral order vector
}

int main() {
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralMatrix(matrix);
    for (int val : ans) { // Print the elements in spiral order
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
