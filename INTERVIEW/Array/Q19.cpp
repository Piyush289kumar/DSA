/* Q19: Two sum -Pairs with 0 Sum
Difficulty: EasyAccuracy: 31.49%Submissions: 453K+Points: 2

Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

Examples:

Input: arr = [-1, 0, 1, 2, -1, -4]
Output: [[-1, 1]]
Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
arr[2] + arr[4] = 1 + (-1) = 0.
The distinct triplets are [-1,1].

Input: arr = [6, 1, 8, 0, 4, -9, -1, -10, -6, -5]
Output: [[-6, 6],[-1, 1]]
Explanation: The distinct triplets are [-1, 1] and [-6, 6].

Expected Time Complexity: O(n log n)
Expected Auxiliary Space: O(n).
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> getPairs(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j = n - 1;

    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    while (i < j)
    {
        int currSum = arr[i] + arr[j];

        if (currSum == 0)
        {
            res.push_back({arr[i++], arr[j--]});

            while (i < j && arr[i] == arr[i - 1])
            {
                i++;
            }

            while (i < j && arr[j] == arr[j + 1])
            {
                j--;
            }
        }
        else if (currSum < 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    sort(res.begin(), res.end());
    return res;
}
int main()
{
    // vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<int> arr = {6, 1, 8, 0, 4, -9, -1, -10, -6, -5};
    vector<vector<int>> result = getPairs(arr);
    for (auto &pair : result)
    {
        for (auto &num : pair)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}