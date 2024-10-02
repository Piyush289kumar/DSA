/* Q33: 136. Single Number
Solved
Easy
Topics
Companies
Hint

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.



Example 1:

Input: nums = [2,2,1]
Output: 1

Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

Example 3:

Input: nums = [1]
Output: 1


===================================================================================================

BIT  Manipulation (^)

Note : Each Element  appears twice except one element which appears only once.

Each element will be cross or cancel each pair element and res ut will be the single element.
===================================================================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{

    int res = 0;

    for (int num : nums)
    {
        res ^= num;
    }

    return res;
}

int main()
{
    vector<int> nums = {2, 2, 1};

    int res = singleNumber(nums);

    cout << "RESPONSE ==> " << res;

    return 1;
}