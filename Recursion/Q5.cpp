/* Q5: Find Element in the given Arrya With Time Complexcity O(log n) */
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums, int target, int left, int right)
{
    if (right == 1)
        return right;
    if (left > right || right == 0)
        return -1;
    int mid = left + (right - left) / 2;
    if (nums[mid] == target)
        return mid;
    if (nums[mid] < target)
        return binarySearch(nums, target, mid + 1, right);
    else
        return binarySearch(nums, target, left, mid - 1);
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 11;
    int left = 0;
    int right = nums.size() - 1;
    int ans = binarySearch(nums, target, left, right);
    cout << "OUTPUT : " << ans << endl;
    return 0;
}