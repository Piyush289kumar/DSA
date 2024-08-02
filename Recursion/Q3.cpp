/* Q3: Find Out the Array is Sorted Or Not. */

#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int> &nums, int low, int high)
{
    if (high <= 1)
        return true;
    if (low == high)
        return true;
    
    if (nums[low] >= nums[low + 1])
        return false;

    return isArraySorted(nums, low + 1, high);
}

int main()
{

    vector<int> nums = {1};
    int low = 0;
    int high = nums.size() - 1;
    bool res = isArraySorted(nums, low, high);
    cout << (res ? "TRUE" : "FALSE");
    return 0;
}