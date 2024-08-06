/* Q7: Bubble Sort Using Recursion. */
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums, int end)
{
    if (0 == end)
        return nums;
    for (int idx = 0; idx < end; idx++)
    {
        if (nums[idx] > nums[idx + 1])
            swap(nums[idx], nums[idx + 1]);
    }
    return bubbleSort(nums, end - 1);
}

int main()
{

    vector<int> nums = {1, 2, 4, 8, 6, 3, 1};

    cout << "Before Bubble Sort : " << endl;
    for (int idx = 0; idx < nums.size(); idx++)
    {
        cout << " - " << nums[idx];
    }
    cout << endl
         << endl;

    int start = 0;
    int end = nums.size() - 1;
    bubbleSort(nums, end);

    cout << "After Bubble Sort : " << endl;
    for (int idx = 0; idx < nums.size(); idx++)
    {
        cout << " - " << nums[idx];
    }
    return 0;
}
