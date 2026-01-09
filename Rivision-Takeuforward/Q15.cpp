/* Q15: Replace elements by its rank in the array. */

#include <bits/stdc++.h>
using namespace std;

void rankSort(vector<int> &nums)
{
    int N = nums.size();
    if (N == 0)
        return;

    // 1. Sort
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());

    unordered_map<int, int> hash;
    int rank = 1;

    for (auto n : temp)
    {
        if (hash.find(n) == hash.end())
            hash[n] = rank++;
    }
    for (int i = 0; i < N; i++)
    {
        nums[i] = hash[nums[i]];
    }

    // output

    for (auto n : nums)
    {
        cout << n << " - ";
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    rankSort(nums);

    return 0;
}