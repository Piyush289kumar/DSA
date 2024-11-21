/* Q17: Replace elements by its rank in the array

Replace elements by its rank in the array

Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.

Examples:

Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…

Example 2:
Input: 1 5 8 15 8 25 9
Output: 1 2 3 5 3 6 4
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so…*/

#include <bits/stdc++.h>
using namespace std;

vector<int> replaceByRank(vector<int> &nums)
{
    if (nums.empty())
    {
        return nums;
    }

    vector<pair<int, int>> hash;
    vector<int> tempVec(nums.begin(), nums.end());

    sort(tempVec.begin(), tempVec.end());

    for (int i = 0; i < nums.size(); i++)
    {
        hash.push_back({tempVec[i], i + 1});
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i])
    }
    

    return {1, 3};
}
int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> nums(n);
    for (int &num : nums)
    {
        cin >> num;
    }

    vector<int> res = replaceByRank(nums);

    cout << "RESPONSE ==> ";
    for (int num : res)
    {
        cout << num << "  ";
    }
    return 0;
}