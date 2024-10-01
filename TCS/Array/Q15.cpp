/* Q15: Max Sum Subarray of size K

==================================
  - Sliding window technique
==================================

Difficulty: EasyAccuracy: 49.6%Submissions: 163K+Points: 2

Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

NOTE*: A subarray is a contiguous part of any given array.

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.

Example 2:

Input:
N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
Explanation:
Arr1 + Arr2 + Arr3 + Arr4 =1000,
which is maximum.

Your Task:

You don't need to read input or print anything. Your task is to complete the function maximumSumSubarray() which takes the integer K, vector Arr with size N, containing the elements of the array and returns the maximum sum of a subarray of size K.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

long maximumSumSubarray(int k, vector<int> &arr, int n)
{
    int i = 0, j = 0;

    long max_sum = 0;

    long window_sum = 0;

    for (int j = 0; j < n; j++)
    {
        window_sum += arr[j];

        if ((j >= k - 1) && (j - i + 1 == k))
        {
            max_sum = max(max_sum, window_sum);
            window_sum -= arr[i++];
        }
    }

    return max_sum;
}

int main()
{
    int n = 4, k = 2;
    vector<int> arr = {100, 200, 300, 400};

    long res = maximumSumSubarray(k, arr, n);

    cout << "RESPONSE ==> " << res;

    return 0;
}