/* Q8: Rotate array by K elements : Block Swap Algorithm. */

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums, int K)
{
    if (K <= 0)
        return;

    int N = nums.size();
    vector<int> dummy(N);

    for (int i = 0; i < N; i++)
    {
        dummy[i] = nums[((i + K) % N)];
    }

    nums = dummy;
    // Output
    for (auto num : nums)
    {
        cout << num << " - ";
    }

    return;
}

int main()
{
    int N, K;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cin >> K;

    rotateArray(nums, K);

    return 0;
}