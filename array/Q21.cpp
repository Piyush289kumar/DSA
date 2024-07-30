/*
Q21: 35. Search Insert Position
Easy
Topics
Companies
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
Constraints:
    1 <= nums.length <= 104
    -104 <= nums[i] <= 104
    nums contains distinct values sorted in ascending order.
    -104 <= target <= 104
 */
#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int firstIdx = 0;
        int lastIdx = nums.size() - 1;
        while (firstIdx <= lastIdx) {
            int middle = lastIdx + (firstIdx - lastIdx) / 2;
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] > target) {
                lastIdx = middle - 1;
            }else{
                firstIdx = middle + 1;
            }
        }
        return firstIdx;
    }
int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int res = searchInsert(nums, target);
    cout << "OUTPUT : " << res << endl;
}