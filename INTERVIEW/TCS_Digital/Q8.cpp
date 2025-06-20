#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums, int N)
{

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < (N - i) - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
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

    cout << "Org" << endl;

    for (auto num : nums)
    {
        cout << num << " ";
    }

    cout << endl
         << endl;

    bubbleSort(nums, N);

    cout << "bubbleSort" << endl;
    for (auto num : nums)
    {
        cout << num << " ";
    }

    return 0;
}