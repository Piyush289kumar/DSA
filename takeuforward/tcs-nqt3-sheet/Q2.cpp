/* Q2: Find the largest number in an array. */

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums.back();
}

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cout << "RES: " << largestElement(nums);

    return 0;
}