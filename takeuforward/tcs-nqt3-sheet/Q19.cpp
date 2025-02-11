/* Q19: Rotate array by K elements. */

#include <bits/stdc++.h>
using namespace std;

void rotateArrayByK(vector<int> &nums, int k)
{
    if (nums.size() <= 1)
    {
        return;
    }
    int N = nums.size();
    vector<int> temp(N, 0);

    for (int i = 0; i < N; i++)
    {
        temp[(i + k) % N] = nums[i];
    }

    nums = temp;
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    rotateArrayByK(nums, K);
    for (auto num : nums)
    {
        cout << num << ", ";
    }
    cout << endl;
    return 0;
}