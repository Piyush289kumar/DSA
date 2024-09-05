/* Q23. Reverse a Array. */

#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArry(vector<int> &nums)
{
    int size = nums.size();

    for (int idx = 0; idx < size / 2; idx++)
    {
        swap(nums[idx], nums[size - idx - 1]);
    }

    return nums;
}

int main()
{

    vector<int> nums = {4, 5, 6, 7, 8};

    cout << "ORG Array : " << endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }

    reverseArry(nums);

    cout << endl
         << "Reverse Array : " << endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}