/* Q16: Find all Symmetric Pairs in the array of pairs. */

#include <bits/stdc++.h>
using namespace std;

void findAllSymmetricPairs(vector<pair<int, int>> &nums)
{
    vector<pair<int, int>> sets;
    vector<pair<int, int>> ans;

    for (auto pair : nums)
    {
        int a = pair.first;
        int b = pair.second;

        if (find(sets.begin(), sets.end(), make_pair(b, a)) != sets.end())
        {
            ans.push_back({a, b});
        }
        else
        {
            sets.push_back({a, b});
        }
    }

    for (auto pair : ans)
    {
        cout << "(" << pair.first << ", " << pair.second << ")" << "\t";
    }
}

int main()
{
    vector<pair<int, int>> nums = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};

    findAllSymmetricPairs(nums);

    return 0;
}