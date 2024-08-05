/* Q7: Bubble Sort Using Recursion. */
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums)
{
    int n = nums.size();

    for (int idx = n - 1; idx > 0; idx--)
    {
        for (int j = 0; j < idx; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }

    return nums;
}

int main()
{

    vector<int> nums = {1, 2, 4, 8, 6, 3, 1};

    vector<int> ans = bubbleSort(nums);

    for (int idx = 0; idx < ans.size(); idx++)
    {
        cout << " - " << ans[idx];
    }
    return 0;
}
