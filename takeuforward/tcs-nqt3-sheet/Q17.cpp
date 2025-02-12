/* Q17: Maximum Product Subarray in an Array. */

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int prod = 1;
    int maxProd = INT_MIN;

    if (nums.size() <= 0)
    {
        return -1;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        prod *= nums[i];
        maxProd = max(maxProd, prod);
        if (prod == 0)
        {
            prod = 1;
        }
    }

    prod = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        prod *= nums[i];
        maxProd = max(maxProd, prod);
        if (prod == 0)
        {
            prod = 1;
        }
    }

    return maxProd;
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

    cout << maxProduct(nums) << endl;

    return 0;
}