/* Q12: TCS NQT Coding Question – 12
Problem Statement – Given an array of integers and a sum, the task is to count all subsets of given array
with sum equal to given sum.
Input: The first line of input contains an integer T denoting the number of test cases. Then T test cases follow.
Each test case contains an integer n denoting the size of the array. The next line contains space separated
integers forming the array. The last line contains the sum.
Output: Count all the subsets of given array with sum equal to given sum.
NOTE: Since the result can be very large, print the value modulo 109+7.
Constraints:
1<=T<=100
1<=n<=103
1<=a[i]<=103
1<=sum<=103
*/

#include <bits/stdc++.h>

using namespace std;

int cntAllSubsetWithSumK(vector<int> &nums, int K)
{
    int cnt = 0, left = 0, right = 0, sum = 0;

    int N = nums.size();

    while (right < N)
    {
        sum += nums[right];
        cout << "SUM : " << sum << " CNT : " << cnt << endl;

        while (sum > K)
        {
            sum -= nums[left++];
        }

        if (sum == K)
        {
            cnt++;
        }

        right++;
    }

    return cnt;
}

int main()
{
    int T;
    cin >> T;
    if (T < 1 || T > 100)
    {
        cout << "INVALID OUTPUT" << endl;
        return 0;
    }

    while (T--)
    {
        int N;
        cin >> N;

        if (N < 1 || N > 103)
        {
            cout << "INVALID OUTPUT" << endl;
            return 0;
        }

        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }
        int K;
        cin >> K;
        cout << cntAllSubsetWithSumK(nums, K) << endl;
    }

    return 0;
}