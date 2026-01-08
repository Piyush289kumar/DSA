/* Q12: Remove Duplicates From an Unsorted Array. */

#include <bits/stdc++.h>
using namespace std;

void rm(vector<int> &nums)
{
    int N = nums.size();
    if (N == 0)
        return;

    unordered_set<int> seen;
    vector<int> dummy;

    for (int n : nums)
    {
        if (!seen.count(n))
        {
            seen.insert(n);
            dummy.push_back(n);
        }
    }

    nums = dummy;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    rm(nums);

    // output

    for (auto n : nums)
        cout << n << " - ";

    return 0;
}