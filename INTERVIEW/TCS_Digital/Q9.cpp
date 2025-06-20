#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &nums, int N)
{

    for (int i = 1; i < N; i++)
    {
        int el = nums[i];
        int j = i - 1;

        while (j >= 0 && nums[j] > el)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = el;
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

    InsertionSort(nums, N);

    for (auto num : nums)
    {
        cout << num << " ";
    }

    return 0;
}