/* Q19: Search an Element in an Array. */

#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &nums, int K)
{

    int N = nums.size();
    if (N == 0)
        return -1;

    for (int i = 0; i < N; i++)
    {
        if (nums[i] == K)
            return i;
    }

    return -1;
}

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cout << find(nums, K) << endl;

    return 0;
}