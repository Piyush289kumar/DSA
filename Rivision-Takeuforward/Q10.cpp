/* Q10: Find Median of the given Array. */

#include <bits/stdc++.h>
using namespace std;

float median(vector<int> &nums, int &N)
{
    if (N == 1)
        return nums[0];

    sort(nums.begin(), nums.end());

    // Odd Case
    if (N % 2 == 1)
    {
        return nums[N / 2];
    }

    // Even Case
    return (((nums[(N / 2) - 1]) + (nums[N / 2])) / 2.00);
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cout << "ANS ==> " << median(nums, N) << endl;

    return 0;
}