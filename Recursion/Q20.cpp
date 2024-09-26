/* Q20: 46. Permutations
-Medium
Given an array nums of distinct integers, return all the possible
permutations
. You can return the answer in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:

Input: nums = [1]
Output: [[1]]



Constraints:

    1 <= nums.length <= 6
    -10 <= nums[i] <= 10
    All the integers of nums are unique.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Integer Qustion
void helper(vector<int> nums, vector<vector<int>> &ans, int idx)
{
    if (idx >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[idx], nums[i]);
        helper(nums, ans, idx + 1);
        // Back Tracking
        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int idx = 0;

    helper(nums, ans, idx);

    return ans;
}
*/

void helper(string str, vector<string> &ans, int idx, int n)
{
    if (idx >= n)
    {
        ans.push_back(str);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        swap(str[i], str[idx]);
        helper(str, ans, idx + 1, n);
        swap(str[i], str[idx]);
    }
}
vector<string> permute(string str)
{
    vector<string> ans;
    int idx = 0;
    int n = str.size();
    helper(str, ans, idx, n);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    string str = "abc";

    // vector<vector<int>> response = permute(nums);
    vector<string> response = permute(str);

    // cout << endl
    //      << endl
    //      << "RESPONSE ==> " << endl;
    // for (int i = 0; i < response.size(); i++)
    // {
    //     cout << "[ ";
    //     for (int j = 0; j < response[i].size(); j++)
    //     {
    //         cout << response[i][j] << " ";
    //     }
    //     cout << "]" << endl;
    // }

    cout << endl
         << endl
         << "RESPONSE ==> " << endl;
    for (int i = 0; i < response.size(); i++)
    {
        cout << "[";
        cout << response[i];
        cout << "]" << endl;
    }

    return 0;
}