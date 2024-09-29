/* Q5 : Rotate Array (Right rotate an array by K places.)

Medium

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [4,5,6,7,1,2,3]


    1 <= nums.length <= 105
    -231 <= nums[i] <= 231 - 1
    0 <= k <= 105
*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int k)
{

    int n = nums.size();

    if (1 > n && n > pow(10, 5))
        return;

    if (k <= 0)
        return;

    vector<int> temp(n, 0);

    for (int i = 0; i < n; i++)
    {
        temp[i] = nums[(i + k) % n];
    }

    nums = temp;

    return;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << endl
         << endl
         << "Response ==> [";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "]";

    return 0;
}