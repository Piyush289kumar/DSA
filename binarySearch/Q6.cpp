/* Q6. 74. Search a 2D Matrix
Medium
Topics
Companies

You are given an m x n integer matrix matrix with the following two properties:

    Each row is sorted in non-decreasing order.
    The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.



Example 1:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false



Constraints:

    m == matrix.length
    n == matrix[i].length
    1 <= m, n <= 100
    -10^4 <= matrix[i][j], target <= 10^4

*/

#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    if (row < 1 || row > 100)
        return false;
    int col = matrix[0].size();
    if (col < 1 || col > 100)
        return false;

    if (target < -10000 || target > 10000)
        return false;

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return true;
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    cout << (searchMatrix(matrix, target) ? "True" : "False");
    return 0;
}