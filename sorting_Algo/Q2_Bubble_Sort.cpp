/* Q2: Bubble Sort. */

#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> &nums)
{

    for (int idx = 0; idx < nums.size(); idx++)
    {
        for (int j = 0; j < nums.size() - idx; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {4, 5, 9, 7, 1, 3, 10};

    bubbleSort(nums);
    cout
        << endl
        << "SORTED ARRAY : ";
    for (int idx = 0; idx < nums.size(); idx++)
    {
        cout << nums[idx] << " - ";
    }
}
