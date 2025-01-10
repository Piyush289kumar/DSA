/* Q1:PreFix Sum.*/

#include <bits/stdc++.h>

using namespace std;

vector<int> findPrefixSum(vector<int> &nums, vector<vector<int>> pq)
{
    vector<int> ans;
    for (int i = 0; i < pq.size(); i++)
    {
        int startIdx = pq[i][0];
        int endIdx = pq[i][1];

        int currSum = 0;
        for (int j = startIdx; j <= endIdx; j++)
        {
            currSum += nums[j];
        }
        ans.push_back(currSum);
    }

    return ans;
}

int main()
{

    vector<int> nums = {1, 1, -1, 2, 3, 4};
    vector<vector<int>> pq = {{0, 4}, {1, 2}, {4, 5}};
    vector<int> res = findPrefixSum(nums, pq);

    // Printing
    cout << "RES : " << endl;

    for (auto el : res)
    {
        cout << el << endl;
    }

    return 0;
}