/* Q15: Find all the non-repeating elements in an array. */

#include <bits/stdc++.h>
using namespace std;

void FindAllRepeating(vector<int> &nums)
{
    unordered_map<int, int> hash;

    for (int num : nums)
    {
        hash[num]++;
    }

    vector<int> nonRepeating;
    for (int num : nums)
    {
        if (hash[num] == 1)
        {
            nonRepeating.push_back(num);
        }
    }

    for (auto num : nonRepeating)
    {
        cout << num << ", ";
    }
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

    FindAllRepeating(nums);

    return 0;
}