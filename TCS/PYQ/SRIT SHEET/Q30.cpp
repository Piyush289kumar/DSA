/* Q30: TCS NQT Coding Question – 30
Problem Statement – Meet Ananya, data analyst at retail company called ‘ABC’ corporation Ananya’s
manager, Jatin has provide her with an inventory stock report in the from of an array of intergers. Negative
for the past month. Anaya’s objective is to find the number of sub-array with in the data whose sum of
elements matches a specific target sum.
Input - Arr = {3, 4, -7, 1, 3, 3, 1, -4}
Sum =7
Output - 4
[0 … 1 ] — {3,4}
[0 … 5] — {3,4,-7,1,3,3}
[3 … 5] — {1,3,3}
[4 … 6] — {3,3,1}
The target sum is 7, hence therefore 4 sub-array which having target sum equal to 7.

*/

#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int> &nums, int K)
{
    unordered_map<int, int> prefixSumFreq;
    prefixSumFreq[0] = 1;
    int prefixSum = 0, cnt = 0;

    for (int num : nums)
    {
        prefixSum += num;

        if (prefixSumFreq.find(prefixSum - K) != prefixSumFreq.end())
        {
            cnt += prefixSumFreq[prefixSum - K];
        }

        prefixSumFreq[prefixSum]++;
    }

    return cnt;
}

int main()
{
    int N, K;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    cin >> K;

    cout << findNumbers(nums, K) << endl;

    return 0;
}