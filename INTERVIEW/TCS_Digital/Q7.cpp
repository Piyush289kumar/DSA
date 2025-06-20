#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{

    for (int i = 0; i < nums.size() - 1; i++)
    {

        int minIdx = i;

        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[minIdx])
            {
                minIdx = j;
            }
        }

        swap(nums[i], nums[minIdx]);
    }
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

    selectionSort(nums);

    for (auto num : nums)
    {
        cout << num << " ";
    }

    return 0;
}