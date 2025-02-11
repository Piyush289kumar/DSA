/* Q21: Finding Equilibrium index in an array. */

#include <bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int> &nums)
{
    int totalSum = 0;
    for (int num : nums)
    {
        totalSum += num;
    }

    int currSum = 0;
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];

        if (totalSum == ((currSum * 2) - nums[i]))
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    cout << findEquilibrium(nums) << endl;

    return 0;
}