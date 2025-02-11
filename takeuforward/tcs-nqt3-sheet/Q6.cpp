/* Q6: Rearrange array in increasing-decreasing order. */

#include <bits/stdc++.h>

using namespace std;

void sortArray(vector<int> &nums)
{
    if (nums.size() <= 1)
    {
        return;
    }

    int N = nums.size();

    sort(nums.begin(), nums.end());

    vector<int> fh(nums.begin(), nums.begin() + N / 2);
    vector<int> sh(nums.begin() + N / 2, nums.end());

    reverse(sh.begin(), sh.end());

    nums = fh;

    nums.insert(nums.end(), sh.begin(), sh.end());
}

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    sortArray(nums);

    for (int num : nums)
    {
        cout << num << " - ";
    }

    cout << endl;

    return 0;
}