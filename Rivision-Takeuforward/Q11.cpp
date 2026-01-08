/* Q11: Remove Duplicates in-place from Sorted Array. */

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &nums)
{
    int N = nums.size();
    int K = 0;

    for (int i = 0; i < N; i++)
    {
        if (nums[i] == nums[K])
        {
            continue;
        }
        else
        {
            K++;
            nums[K] = nums[i];
        }
    }

    nums.resize(K + 1);
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

    removeDuplicates(nums);

    // output
    for (int num : nums)
    {
        cout << num << " - ";
    }

    return 0;
}