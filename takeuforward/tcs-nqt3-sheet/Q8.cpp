/* Q8: Rotate array by K elements : Block Swap Algorithm. */

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums, int K)
{
    int n = nums.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i] = nums[(i + K) % n];
    }

    nums = temp;

    return;
}

int main()
{

    int N, K;
    cin >> N >> K;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    rotateArray(nums, K);

    for (int num : nums)
    {
        cout << num << " - ";
    }

    return 0;
}