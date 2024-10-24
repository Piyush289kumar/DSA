/* Q10: Row with max 1s
Difficulty: MediumAccuracy: 33.09%Submissions: 314K+Points: 4

You are given a 2D array consisting of only 1's and 0's, where each row is sorted in non-decreasing order. You need to find and return the index of the first row that has the most number of 1s. If no such row exists, return -1.
Note: 0-based indexing is followed.

Examples:

Input: arr[][] = [[0, 1, 1, 1],
               [0, 0, 1, 1],
               [1, 1, 1, 1],
               [0, 0, 0, 0]]
Output: 2
Explanation: Row 2 contains 4 1's.

Input: arr[][] = [[0, 0],
               [1, 1]]
Output: 1
Explanation: Row 1 contains 2 1's.

Expected Time Complexity: O(n+m)
Expected Auxiliary Space: O(1)

Note : Here n,m refers to the number of rows and columns respectively.
*/

#include <iostream>
#include <vector>

using namespace std;

int firstOccrOnce(vector<int> arr, int m, int target)
{
    int possiableAns = -1;
    int start = 0;
    int end = m - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= target)
        {
            possiableAns = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return possiableAns;
}
int rowWithMax1s(vector<vector<int>> &arr)
{
    int max_onces = 0;
    int max_onces_idx = -1;
    int m = arr.size();
    int n = arr[0].size();
    
    for (int i = 0; i < m; i++)
    {
        int curr_onces = firstOccrOnce(arr[i], n, 1);

        if (curr_onces != -1)
        {
            curr_onces = n - curr_onces;

            if (max_onces < curr_onces)
            {
                max_onces = curr_onces;
                max_onces_idx = i;
            }
        }
    }

    return max_onces_idx;
}

int main()
{
    // Test Cases: 

    // vector<vector<int>> arr = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1},{0, 0, 0, 0}};
    vector<vector<int>> arr = {{0, 0, 0}, {0, 0, 0}};

    cout << rowWithMax1s(arr) << endl;
    return 1;
}