/*
Q19: 34. Find First and Last Position of Element in Sorted Array
Medium
Topics
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
Constraints:
    0 <= nums.length <= 105
    -109 <= nums[i] <= 109
    nums is a non-decreasing array.
    -109 <= target <= 109
*/
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums, int target, bool isSearchLastIdx)
{
    int first = 0;
    int last = nums.size() - 1;
    int middle = 0;
    int idx = -1;
    while (first <= last)
    {
        middle = (last + ((first - last) / 2));
        if (nums[middle] < target)
        {
            first = middle + 1;
        }
        else if (nums[middle] > target)
        {
            last = middle - 1;
        }
        else if (nums[middle] == target)
        {
            idx = middle;
            isSearchLastIdx ? first = middle + 1 : last = middle - 1;
        }
    }
    return idx;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans = {-1, -1};
    if (nums.size() <= 1)
    {
        return ans;
    }
    ans[0] = binarySearch(nums, target, false);
    ans[1] = binarySearch(nums, target, true);
    return ans;
}
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 7;
    vector<int> result = searchRange(nums, target);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}