/*
Q1: 34. Find First and Last Position of Element in Sorted Array
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

#include <iostream>
#include <vector>

using namespace std;

int findFirstIdx(vector<int> &nums, int target, int first, int last)
{
    return -1;
}
int findLastIdx(vector<int> &nums, int target, int first, int last)
{
    return -1;
}

vector<int> findFirstAndLastIndex(vector<int> &nums, int target)
{
    vector<int> response = {0, 0};
    int first = 0;
    int last = nums.size() - 1;

    response[0] = findFirstIdx(nums, target, first, last);
    response[0] = findLastIdx(nums, target, first, last);

    return response;
}

int main()
{
    vector<int> nums = {0, 5, 5, 6, 6, 6};
    int target = 5;
    vector<int> ans = findFirstAndLastIndex(nums, target);

    cout << "OUTPUT :" << endl;

    cout << "FIRST IDX : " << ans[0] << " | LAST IDX : " << ans[1];

    return 0;
}
