/*
Q2: 852. Peak Index in a Mountain Array
Medium
Topics
Companies
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.
Example 1:
Input: arr = [0,1,0]
Output: 1
Example 2:
Input: arr = [0,2,1,0]
Output: 1
Example 3:
Input: arr = [0,10,5,2]
Output: 1
Constraints:
    3 <= arr.length <= 105
    0 <= arr[i] <= 106
    arr is guaranteed to be a mountain array.*/

#include <iostream>
#include <vector>

using namespace std;
// int findPeakElement(vector<int> nums, int start, int end)
// {
//     if (start == end)
//         return start;
//     int mid = (start + end) / 2;
//     if (nums[mid] < nums[mid + 1])
//         return findPeakElement(nums, mid + 1, end);
//     else
//         return findPeakElement(nums, start, mid);
// }
// int peakIndexInMountainArray(vector<int> &arr)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     return findPeakElement(arr, start, end);
// }

int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    return findPeak(arr, start, end);
}
int main()
{
    vector<int> arr = {0, 5, 10, 5, 2};
    int ans = peakIndexInMountainArray(arr);
    cout << "OUTPUT : " << ans;
    return 0;
}