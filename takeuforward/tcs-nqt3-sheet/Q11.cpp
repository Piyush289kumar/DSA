/* Q11: Remove Duplicates in-place from Sorted Array. */

#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int> &nums)
{
    int K = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[K] = nums[i];
            K++;
        }
    }

    nums.resize(K);
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

    removeDuplicate(nums);

    for (auto num : nums)
    {
        cout << num << " - ";
    }

    return 0;
}