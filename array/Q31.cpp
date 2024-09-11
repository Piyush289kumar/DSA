/* Q31. Print Like A Wave - Coding Ninjas
Easy
0/40
Average time to solve is 20m
217 upvotes
Asked in companies
Problem statement

For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

For eg:-

The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].

Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= T <= 10
1 <= N <= 100
1 <= M <= 100
0 <= ARR[i][j] <= 100*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> res = {};
    int i = 0;
    while (i < mCols)
    {
        int j = 0;
        while (j < nRows)
        {
            res.push_back(arr[j][i]);
            j++;
        }
        i++;
        j = nRows - 1;
        while (j >= 0 && i < mCols)
        {
            res.push_back(arr[j][i]);
            j--;
        }
        i++;
    }
    return res;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int nRows = 3;
    int mCols = 3;
    vector<int> res = wavePrint(arr, nRows, mCols);
    cout << endl
         << "RESPONSE ==> ";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}