/* Q10: Find Median of the given Array. */

#include <bits/stdc++.h>
using namespace std;

void findMedian(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    if (n <= 0)
    {
        cout << -1;
    }

    if (n % 2 == 0)
    {
        int idx = n / 2;
        double mid = (nums[idx] + nums[idx - 1]) / 2.0;
        cout << mid << endl;
    }
    else
    {
        cout << nums[n / 2] << endl;
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

    findMedian(nums);

    return 0;
}