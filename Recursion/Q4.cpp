/* Q4: Calculate Sum of Array. */

#include <bits/stdc++.h>
using namespace std;

int sumOfArrayEl(vector<int> &nums, int low, int high)
{
    if (low == high)
        return nums[high];

    nums[low + 1] += nums[low];
    return sumOfArrayEl(nums, low + 1, high);
}

int main()
{
    vector<int> nums = {3, 2, 5, 1, 6};
    int low = 0;
    int high = nums.size() - 1;
    int sum = sumOfArrayEl(nums, low, high);
    cout << "SUM : " << sum;
    return 0;
}