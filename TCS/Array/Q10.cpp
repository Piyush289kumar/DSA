/* Q10: Maximum Sub array sum (Kadane’s Algorithm)

Kadane's Algorithm 3 Step

1. sum = sum + arr[i];
2. maxSum = max(maxSum, sum);
3. if(sum < 0 ) sum = 0;

============================

Difficulty: Medium

Given an integer array arr[]. You need to find and return the maximum sum possible from all the subarrays.

Examples:

Input: arr[] = [1, 2, 3, -2, 5]
Output: 9
Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5).

Input: arr[] = [-1, -2, -3, -4]
Output: -1
Explanation: Max subarray sum is -1 of element (-1).

Input: arr[] = [5, 4, 7]
Output: 16
Explanation: Max subarray sum is 16 of elements (5, 4, 7)

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
        return arr[0];

    int sum = 0;
    int maxSum = arr[0];

    for (int i : arr)
    {
        sum += arr[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
            sum = 0;
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {1, 2, 3, -2, 5};
    cout << maxSubarraySum(arr);
    return 0;
}