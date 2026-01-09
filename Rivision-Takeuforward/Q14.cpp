/* Q14: Maximum product subarray in an array. */

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int maxProd = INT_MIN, prefix = 1, suffix = 1;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;

        prefix *= nums[i];
        suffix *= nums[(n - 1) - i];

        maxProd = max(maxProd, max(prefix, suffix));
    }

    return maxProd;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cout << "MAX PRODUCT == > " << maxProduct(nums) << endl;

    return 0;
}