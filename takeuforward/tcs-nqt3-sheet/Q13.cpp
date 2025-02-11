/* Q13: Adding Element in an Array. */

#include <bits/stdc++.h>
using namespace std;

void insertbeginning(vector<int> &nums, int num)
{
    reverse(nums.begin(), nums.end());
    nums.push_back(num);
    reverse(nums.begin(), nums.end());
}
void insertending(vector<int> &nums, int num)
{
    nums.push_back(num);
}
void insertatpos(vector<int> &nums, int num, int pos)
{
    vector<int> temp(nums.begin(), nums.begin() +( pos - 1));
    temp.push_back(num);
    temp.insert(temp.end(), nums.begin() + pos, nums.end());

    nums = temp;
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

    insertbeginning(nums, 6);
    insertending(nums, 7);
    insertatpos(nums, 8, 4);

    for (auto num : nums)
    {
        cout << num << ", ";
    }

    return 0;
}