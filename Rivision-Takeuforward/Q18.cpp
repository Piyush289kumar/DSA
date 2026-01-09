/* Q18: Finding equilibrium index of an array. */

#include <bits/stdc++.h>

using namespace std;

int equ(vector<int> &nums)
{
    int N = nums.size();
    if (N == 0)
        return 0;

    long long total = 0;
    for (auto n : nums)
        total += n;

    long long left = 0;
    for (int i = 0; i < N; i++)
    {
        if (left * 2 == (total - nums[i]))
            return i;

        left += nums[i];
    }

    return -1;
}

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cout << equ(nums) << endl;

    return 0;
}