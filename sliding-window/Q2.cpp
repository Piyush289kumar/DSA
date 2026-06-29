// Maximum Of All Subarrays Of Size k.
#include <bits/stdc++.h>
using namespace std;

vector<int> maximumOfAllSubarraysOfSizeK(vector<int> &nums, int n, int k)
{
    int maxE = INT_MIN;
    int l = 0;

    vector<int> ans;

    for (int r = 0; r < n; r++)
    {
        maxE = max(maxE, nums[r]);

        if ((r - l + 1) == k)
        {
            ans.push_back(maxE);
            maxE = INT_MIN;
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> res = maximumOfAllSubarraysOfSizeK(nums, n, k);

    cout << endl;

    for (auto &it : res)
        cout << it << " ";

    return 0;
}