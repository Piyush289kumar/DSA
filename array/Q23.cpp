/* Q23. Reverse a Array. */

#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArry(vector<int> &nums, int m)
{
    int s = m;
    int e = nums.size() - 1;

    while (s <= e)
    {
        swap(nums[s], nums[e]);
        s++;
        e--;
    }

    return nums;
}

int main()
{
    vector<int> nums = {10, 9, 8, 7, 6};
    int m = 2; // Idx Where User Want to Starting Array Reversing.

    cout << "ORG Array : " << endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }

    reverseArry(nums, m);

    cout << endl
         << "Reverse Array : " << endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}