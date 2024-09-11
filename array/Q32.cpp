/* Q32. 54. Spiral Matrix
Medium

Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

Constraints:

    m == matrix.length
    n == matrix[i].length
    1 <= m, n <= 10
    -100 <= matrix[i][j] <= 100

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> result;
    int row = matrix.size();
    if (row == 0)
        return result; // Handle empty matrix case
    int col = matrix[0].size();

    int insertedElements = 0;
    int total = row * col;

    // Helper Variables
    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;

    while (insertedElements < total)
    {
        // Print Starting Row
        for (int i = startCol; i <= endCol && insertedElements < total; i++)
        {
            result.push_back(matrix[startCol][i]);
            insertedElements++;
        }
        startRow++;

        // Print End Col
        for (int i = startRow; i <= endRow && insertedElements < total; i++)
        {
            result.push_back(matrix[i][endCol]);
            insertedElements++;
        }
        endCol--;

        // Print End Row
        for (int i = endCol; i >= startCol && insertedElements < total; i--)
        {
            result.push_back(matrix[endRow][i]);
            insertedElements++;
        }
        endRow--;

        // Print Starting Col
        for (int i = endRow; i >= startRow && insertedElements < total; i--)
        {
            result.push_back(matrix[i][startCol]);
            insertedElements++;
        }
        startCol++;
    }

    return result;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> res = spiralOrder(matrix);

    cout << "RESPONSE ==> ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}