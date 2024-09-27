/* Q21: Rat in a Maze Problem - I
Difficulty: MediumAccuracy: 35.75%Submissions: 294K+Points: 4

Consider a rat placed at (0, 0) in a square matrix mat of order n* n. It has to reach the destination at (n - 1, n - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell. In case of no path, return an empty list. The driver will output "-1" automatically.

Examples:

Input: mat[][] = [[1, 0, 0, 0],
                [1, 1, 0, 1],
                [1, 1, 0, 0],
                [0, 1, 1, 1]]
Output: DDRDRR DRDDRR
Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.

Input: mat[][] = [[1, 0],
                [1, 0]]
Output: -1
Explanation: No path exists and destination cell is blocked.

Expected Time Complexity: O(3n^2)
Expected Auxiliary Space: O(l * x)
Here l = length of the path, x = number of paths.

Constraints:
2 ≤ n ≤ 5
0 ≤ mat[i][j] ≤ 1*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSafeToMove(vector<vector<int>> &mat, int n, int x, int y, vector<vector<int>> &visited)
{
    return ((x >= 0 && x < n && y >= 0 && y < n) && mat[x][y] == 1 && visited[x][y] == 0) ? true : false;
}

void helper(vector<vector<int>> &mat, int n, int x, int y, vector<vector<int>> &visited, vector<string> &path, string visitedPathStep)
{
    if (x == n - 1 && y == n - 1)
    {
        path.push_back(visitedPathStep);
        return;
    }

    visited[x][y] = 1;

    // Traval Path Direction ==> D | L | R | U

    // Down
    int newX = x + 1;
    int newY = y;
    if (isSafeToMove(mat, n, newX, newY, visited))
    {
        visitedPathStep.push_back('D');
        helper(mat, n, newX, newY, visited, path, visitedPathStep);
        // Back Traking
        visitedPathStep.pop_back();
    };

    // Left
    newX = x;
    newY = y - 1;
    if (isSafeToMove(mat, n, newX, newY, visited))
    {
        visitedPathStep.push_back('L');
        helper(mat, n, newX, newY, visited, path, visitedPathStep);
        // Back Traking
        visitedPathStep.pop_back();
    };

    // Right
    newX = x;
    newY = y + 1;
    if (isSafeToMove(mat, n, newX, newY, visited))
    {
        visitedPathStep.push_back('R');
        helper(mat, n, newX, newY, visited, path, visitedPathStep);
        // Back Traking
        visitedPathStep.pop_back();
    };

    // Up
    newX = x - 1;
    newY = y;
    if (isSafeToMove(mat, n, newX, newY, visited))
    {
        visitedPathStep.push_back('U');
        helper(mat, n, newX, newY, visited, path, visitedPathStep);
        // Back Traking
        visitedPathStep.pop_back();
    };

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &mat)
{
    vector<string> path;

    if (mat[0][0] == 0)
    {
        path = {"-1"};
        return path;
    }

    int n = mat.size();
    int scrX = 0;
    int scrY = 0;
    string visitedPathStep;

    vector<vector<int>> visited(n, vector<int>(n, 0));

    helper(mat, n, scrX, scrY, visited, path, visitedPathStep);

    return path;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};

    vector<string> response = findPath(mat);

    cout << "RESPONSE ==> ";

    for (int i = 0; i < response.size(); i++)
    {
        cout << "[ " << response[i] << " ] ";
    }

    return 0;
}