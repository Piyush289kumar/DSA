/* Q26: Kadane's Algorithm
Difficulty: MediumAccuracy: 36.28%Submissions: 996K+Points: 4

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
Explanation: Max subarray sum is 16 of elements (5, 4, 7) */

#include <iostream>
#include <vector>

using namespace std;

/* Alog

    1. sum += arr[i]
    2. maxSum = max(maxSum, sum)
    3. if(sum < 0) sum = 0 */
int maxSubarraySum(vector<int> &arr)
{

    int n = arr.size();
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    int sum = 0;
    int maxSum = arr[0];

    for (int num : arr)
    {
        sum += num;

        if (sum > maxSum)
        {
            maxSum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {1, 2, 3, -2, 5};

    cout << "RESPONSE ==> " << maxSubarraySum(arr);

    return 0;
}