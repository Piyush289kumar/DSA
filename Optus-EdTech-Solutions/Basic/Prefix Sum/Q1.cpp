/* Q1:PreFix Sum.*/

#include <bits/stdc++.h>

using namespace std;

vector<int> findPrefixSum(vector<int> &nums, vector<vector<int>> pq)
{
    vector<int> prefixSum(nums.size());
    int prefixCurrSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        prefixCurrSum += nums[i];
        prefixSum[i] = prefixCurrSum;
    }

    // Calculate Sum By Position
    vector<int> ans;
    for (int i = 0; i < pq.size(); i++)
    {
        if (i != 0)
        {
            ans.push_back(prefixSum[pq[i].back()] - prefixSum[pq[i].front() - 1]);
        }
        else
        {
            ans.push_back(prefixSum[pq[i].back()]);
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 1, -1, 2, 3, 4};
    vector<vector<int>> pq = {{0, 4}, {1, 4}, {2, 3}, {1, 5}};
    vector<int> res = findPrefixSum(nums, pq);

    // Printing
    cout << "RES : " << endl;

    for (auto el : res)
    {
        cout << el << endl;
    }

    return 0;
}