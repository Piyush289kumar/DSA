/* Q13: Find all Symmetric Pairs in the array of pairs. */

#include <bits/stdc++.h>

using namespace std;

void findAllSem(vector<pair<int, int>> &nums)
{
    if (nums.size() == 0)
        return;

    unordered_map<int, int> seen;
    vector<pair<int, int>> ans;

    for (auto num : nums)
    {
        int f = num.first;
        int s = num.second;

        if (seen.find(s) != seen.end() && seen[s] == f)
        {
            ans.push_back({f, s});
        }
        else
        {
            seen[f] = s;
        }
    }


    // output

    for(auto a : ans){
        cout << "(" << a.first << "," << a.second << ")" << " ";
    }
}

int main()
{
    int N = 5;

    vector<pair<int, int>> nums(N);

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i].first >> nums[i].second;
    }

    findAllSem(nums);

    return 0;
}