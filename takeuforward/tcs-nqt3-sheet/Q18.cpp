/* Q18: Replace elements by its rank in the array. */

#include <bits/stdc++.h>
using namespace std;

void replaceByRank(vector<int> &nums)
{
    vector<int> sorted(nums.begin(), nums.end());
    sort(sorted.begin(), sorted.end());

    unordered_map<int, int> hash;

    for (int i = 0; i < sorted.size(); i++)
    {
        hash[sorted[i]] = i + 1;
    }

    for (int i = 0; i < hash.size(); i++)
    {
        nums[i] = hash[nums[i]];
    }
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

    replaceByRank(nums);

    for (int num : nums)
    {
        cout << num << " - ";
    }

    return 0;
}