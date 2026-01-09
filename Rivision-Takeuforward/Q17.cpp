/* Q17: Rotate array by K elements. */

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums, int K, int Rotation)
{
    if (K == 0)
        return;

    int N = nums.size();
    vector<int> dummy(N);
    for (int i = 0; i < N; i++)
    {
        if (Rotation == 1)
        {
            dummy[(i + K) % N] = nums[i];
        }
        else
        {
            dummy[i] = nums[(i + K) % N];
        }
    }

    // output
    nums = dummy;
    for (auto n : nums)
        cout << n << ", ";
}

int main()
{
    int N, K, Rotation;
    cin >> N >> K >> Rotation;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    rotateArray(nums, K, Rotation);

    return 0;
}