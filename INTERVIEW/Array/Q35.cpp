/* Q35: Spirally traversing a matrix
Difficulty: MediumAccuracy: 35.2%Submissions: 284K+Points: 4

You are given a rectangular matrix, and your task is to return an array while traversing the matrix in spiral form.

Examples:

Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15,16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
Explanation:

Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]
Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
Explanation: Applying same technique as shown above, output will be 1 2 3 4 8 12 11 10 9 5 6 7.

Input: mat[][] = [[32, 44, 27, 23], [54, 28, 50, 62]]
Output: [32, 44, 27, 23, 62, 50, 28, 54]
Explanation: Applying same technique as shown above, output will be 32 44 27 23 62 50 28 54.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> spirallyTraverse(vector<vector<int>> &mat)
{
    vector<int> ans;
    int row = mat.size();
    int col = mat[0].size();
    if (row <= 0)
    {
        return ans;
    }
    int insertedEl = 0;
    int totalEl = row * col;
    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;
    while (insertedEl < totalEl)
    {
        for (int i = startCol; i <= endCol && insertedEl < totalEl; i++)
        {
            ans.push_back(mat[startRow][i]);
            insertedEl++;
        }
        startRow++;
        for (int i = startRow; i <= endRow && insertedEl < totalEl; i++)
        {
            ans.push_back(mat[i][endCol]);
            insertedEl++;
        }
        endCol--;
        for (int i = endCol; i >= startCol && insertedEl < totalEl; i--)
        {
            ans.push_back(mat[endRow][i]);
            insertedEl++;
        }
        endRow--;
        for (int i = endRow; i >= startRow && insertedEl < totalEl; i--)
        {
            ans.push_back(mat[i][startCol]);
            insertedEl++;
        }
        startCol++;
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {
                               {1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}
                               };
    vector<int> res = spirallyTraverse(mat);

    for (int num : res)
    {
        cout << num << " ";
    }

    return 0;
}