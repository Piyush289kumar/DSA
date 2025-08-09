#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &nums, int size, int i)
{
    while (true)
    {
        int largest = i;
        int lChild = 2 * i + 1;
        int rChild = 2 * i + 2;

        if (lChild < size && nums[largest] < nums[lChild])
            largest = lChild;
        if (rChild < size && nums[largest] < nums[rChild])
            largest = rChild;

        if (largest == i)
            break;

        swap(nums[i], nums[largest]);
        i = largest;
    }
}
void heapSort(vector<int> &nums)
{
    int size = nums.size();

    // 1. Build Heap
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(nums, size, i);
    }

    // 2. Sort Heap
    for (int i = size - 1; i > 0; i--)
    {
        swap(nums[0], nums[i]);
        heapify(nums, i, 0);
    }
}

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    heapSort(nums);

    cout << endl
         << "SORTED : ";
    for (int n : nums)
        cout << n << " ";

    return 0;
}