/* Q3: Find the Pivot Element. Time Complexity O(log n)*/
#include <iostream>
#include <vector>
using namespace std;
int findPivotElement(vector<int> &nums, int start, int end)
{
    if (start == end)
        return end;
    int mid = (start + end) / 2;
    if (nums[0] < nums[mid])
        return findPivotElement(nums, mid + 1, end);
    else
        return findPivotElement(nums, start, mid);
}
int main()
{
    vector<int> nums = {4, 5, 6, 0, 1, 2};
    int start = 0;
    int end = nums.size() - 1;
    cout << "OUTPUT : " << findPivotElement(nums, start, end);
    return 0;
}