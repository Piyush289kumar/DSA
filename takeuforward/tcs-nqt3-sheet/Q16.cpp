/* Q16: Find all Symmetric Pairs in the array of pairs. */

#include <bits/stdc++.h>
using namespace std;

void findAllSymmetricPairs(vector<pair<int, int>> &nums)
{
    unordered_map<int, int> pairMap;

    for (auto &p : nums)
    {
        int first = p.first;
        int second = p.second;

        if (pairMap.find(second) != pairMap.end() && pairMap[second] == first)
        {
            cout << "(" << second << ", " << first << ")" << endl;
        }
        else
        {
            pairMap[first] = second;
        }
    }
}

int main()
{
    vector<pair<int, int>> nums = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};

    findAllSymmetricPairs(nums);

    return 0;
}