/* Q23: Search an Element in an Array. */

#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int k)
{
    if (nums.size() <= 0)
    {
        return -1;
    }

    sort(nums.begin(), nums.end());

    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == k)
        {
            return mid;
        }
        else if (nums[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    cout << search(nums, K) << endl;

    return 0;
}