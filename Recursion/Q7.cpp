/* Q7: Bubble Sort Using Recursion. */
#include <bits/stdc++.h>
using namespace std;
vector<int> bubbleSort(vector<int> &nums, int first, int last)
{
    if (first == last)
        return nums;
    int maxEl = nums[firist];
    while (first < last)
    {
        if (maxEl < nums[first])
            maxEl = nums[first];
        first++;
    }
    nums[last] = maxEl;
    return bubbleSort(nums, first, last - 1);
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 8, 10, 2, 1};
    int first = 0;
    int last = nums.size() - 1;
    cout << "BEFORE ::::::: " << endl
         << endl;
    for (int idx = 0; idx < nums.size() - 1; idx)
    {
        cout << idx << " - " << nums[idx] << endl;
    }
    cout << endl
         << endl;
    bubbleSort(nums, first, last);
    cout << "AFTER ::::::: " << endl
         << endl;
    for (int idx = 0; idx < nums.size() - 1; idx)
    {
        cout << idx << " - " << nums[idx] << endl;
    }
    return 0;
}