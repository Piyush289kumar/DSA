/* Q26. 283. Move Zeroes
Easy
Topics
Companies
Hint

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]



Constraints:

    1 <= nums.length <= 104
    -231 <= nums[i] <= 231 - 1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonZeroIdx = 0;

    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[nonZeroIdx], nums[j]);
            nonZeroIdx++;
        }
    }
}

int main()
{
    // vector<int> nums = {0, 1, 0, 3, 12};
    // vector<int> nums = {0, 1, 0, 3, 12, 0};
    vector<int> nums = {0};
    moveZeroes(nums);

    cout << "RESPONSE ARRAY : " << endl;
    for (int idx = 0; idx < nums.size(); idx++)
    {
        cout << " | " << nums[idx];
    }
}