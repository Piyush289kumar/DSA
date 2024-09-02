/* Q4 : Search In Rotated Array In 0(long n) Time Complexity.*/
#include <iostream>
#include <vector>
using namespace std;
int findPivotIdx(vector<int> nums, int start, int end)
{
    if (start == end)
        return start;
    int mid = (start + end) / 2;
    if (nums[0] < nums[mid])
        return findPivotIdx(nums, mid + 1, end);
    else
        return findPivotIdx(nums, start, mid);
}
int binarySearch(vector<int> &nums, int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (nums[mid] == target)
        return mid;
    if (nums[mid] < target)
        return binarySearch(nums, target, mid + 1, end);
    else
        return binarySearch(nums, target, start, mid - 1);
}
int search(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int pivotIdx = findPivotIdx(nums, start, end);
    cout << "PIVOT IDX : " << pivotIdx << endl;
    if (nums[0] <= target && target <= nums[pivotIdx - 1])
    {
        return binarySearch(nums, target, start, pivotIdx - 1);
    }
    else if (nums[pivotIdx] <= target && target <= nums[end])
    {
        return binarySearch(nums, target, pivotIdx, end);
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> nums = {7, 9, 0, 1, 2, 3};
    int target = 10;
    int ans = search(nums, target);
    cout << "OUTPUT : " << ans;
    return 0;
}