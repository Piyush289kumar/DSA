/* Q4. Reverse a given Array. */
#include <bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> & nums)
{

    if (nums.size() <= 1)
    {
        return;
    }

    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        swap(nums[start++], nums[end--]);
    }

    return;
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

    reverseArr(nums);

    cout << "RES: ";

    for (auto num : nums)
    {
        cout << num << " - ";
    }
    cout << endl;

    return 0;
}