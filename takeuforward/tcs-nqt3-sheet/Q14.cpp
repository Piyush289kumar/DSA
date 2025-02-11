/* Q14: Find all repeating elements in an array. */

#include <bits/stdc++.h>
using namespace std;

void FindAllRepeating(vector<int> &nums)
{
    map<int, int> freq;
    for (int num : nums)
    {
        freq[num]++;
    }

    for (auto e : freq)
    {
        if (e.second > 1)
        {
            cout << e.first << ", ";
        }
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