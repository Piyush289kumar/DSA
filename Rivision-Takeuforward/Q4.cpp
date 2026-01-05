/* Q4: Reverse a given array. */

#include <bits/stdc++.h>
using namespace std;

void revArr(vector<int> &nums)
{

    // Two Pointer Approach

    int lft = 0, rht = nums.size() - 1;

    while (lft <= rht)
    {
        swap(nums[lft++], nums[rht--]);
    }

    // Print
    for (auto num : nums)
    {
        cout << num << " - ";
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

    revArr(nums);

    return 0;
}