/* Q12: Remove Duplicates From an Unsorted Array. */

#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int> &nums)
{
    unordered_set<int> visited;
    vector<int> unique;

    for (auto num : nums)
    {
        if (visited.find(num) == visited.end())
        {
            unique.push_back(num);
            visited.insert(num);
        }
    }

    nums = unique;
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

    removeDuplicate(nums);

    for (auto num : nums)
    {
        cout << num << " - ";
    }

    cout << endl;
    return 0;
}
