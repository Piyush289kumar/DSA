/* Q27. 189. Rotate Array
Medium
Topics
Companies
Hint

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:

    1 <= nums.length <= 10^5
    -231 <= nums[i] <= 231 - 1
    0 <= k <= 10^5
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void rotate(vector<int> &nums, int k)
{

    int size = nums.size();

    if (size >= 1 && size <= pow(10, 5))
    {
        vector<int> tempArr(size);
        for (int idx = 0; idx < size; idx++)
        {
            tempArr[(idx + k) % size] = nums[idx];
        }
        nums = tempArr;
    }
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    rotate(nums, k);

    for (int idx = 0; idx < nums.size(); idx++)
    {
        cout << " " << nums[idx];
    }

    return 0;
}
