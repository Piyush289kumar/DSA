/* Q19: 78. Subsets
Medium
Given an integer array nums of unique elements, return all possible
subsets
(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:

Input: nums = [0]
Output: [[],[0]]



Constraints:

    1 <= nums.length <= 10
    -10 <= nums[i] <= 10
    All the numbers of nums are unique.

*/

#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // Exclusive
    solve(nums, output, index + 1, ans);

    // Included
    int ele = nums[index];
    output.push_back(ele);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> response = subsets(nums);

    cout << endl
         << endl
         << "RESPONSE ==> ";
    for (int i = 0; i < response.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < response[i].size(); j++)
        {
            cout << response[i][j] << " ";
        }
        cout << "] ";
    }
}