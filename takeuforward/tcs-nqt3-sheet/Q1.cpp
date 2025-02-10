/* Q1: Find the smallest element in an array. */

#include <bits/stdc++.h>

using namespace std;

int findSmallest(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[0];
}

int main()
{
    int N;
    cout << "Enter size : ";
    cin >> N;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    int res = findSmallest(nums);

    cout << "RES : " << res << endl;

    return 0;
}