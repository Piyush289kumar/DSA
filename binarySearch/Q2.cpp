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

int findPeakEle(vector<int> arr, int peakEle, int first, int end)
{

    if (first > end)
    {
        return peakEle;
    }

    int mid = end + (first - end) / 2;

    if (arr[mid] > arr[mid - 1])
    {
        return findPeakEle(arr, mid, mid + 1, end);
    }
    if (arr[mid] > arr[mid + 1])
    {
        return findPeakEle(arr, mid, first, mid - 1);
    }
}
int peakIndexInMountainArray(vector<int> &arr)
{
    if (arr.size() < 3 || arr.size() > 105)
        return -1;

    int first = 0;
    int end = arr.size() - 1;
    int peakEle = -1;

    int res = findPeakEle(arr, peakEle, first, end);

    return res;
}

int main()
{
    vector<int> arr = {0, 1, 0};

    int ans = peakIndexInMountainArray(arr);

    cout << "OUTPUT : " << ans;
    return 0;
}