/* Q1: Selection Sort */

#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArry(vector<int> &nums)
{

    for (int idx = 0; idx < nums.size(); idx++)
    {
        int minIdx = idx;
        for (int j = idx + 1; j < nums.size(); j++)
        {
            if (nums[minIdx] > nums[j])

                minIdx = j;
        }
        swap(nums[idx], nums[minIdx]);
    }
    return nums;
}

int main()
{

    vector<int> nums = {6, 2, 8, 4, 10};
    vector<int> ans = sortArry(nums);

    cout << endl
         << "SORTED ARRAY: " << endl;
    for (int idx = 0; idx < ans.size(); idx++)
    {
        cout << " - " << ans[idx];
    }
}