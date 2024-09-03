/* Q2: Bubble Sort. */

#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> &nums)
{

    for (int idx = 0; idx < nums.size(); idx++)
    {
        bool swapped = false;
        for (int j = 0; j < nums.size() - idx - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 7, 6};

    bubbleSort(nums);
    cout
        << endl
        << "SORTED ARRAY : ";
    for (int idx = 0; idx < nums.size(); idx++)
    {
        cout << nums[idx] << " - ";
    }
}
