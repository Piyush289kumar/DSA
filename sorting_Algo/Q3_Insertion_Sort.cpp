/* Q3. Insertion Sort. */

#include <iostream>
#include <vector>

using namespace std;

vector<int> InsertionSort(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        int temp = nums[i];

        int j = i - 1;
        while (j >= 0)
        {
            if (temp < nums[j])
            {
                nums[j + 1] = nums[j];
            }
            else
            {
                break;
            }
            j--;
        }
        nums[j + 1] = temp;
    }

    return nums;
}

int main()
{
    vector<int> nums = {4, 3, 2, 1};

    InsertionSort(nums);

    cout << endl
         << "SORTED ARRAY : " << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ", ";
    }

    return 0;
}