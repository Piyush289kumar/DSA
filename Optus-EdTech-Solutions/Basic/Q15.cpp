#include <bits/stdc++.h>
using namespace std;

int fnc(vector<int> &nums)
{

    int cnt = 0, mod = 4;

    int low = 0, high = nums.size() - 1;

    while (low < high)
    {
        if (((nums[low++] % mod) + (nums[high--] % mod)) % mod == 0)
        {
            cout << nums[low] << " - " << nums[high] << endl;
            cnt++;
        }
    }

    return cnt;
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

    cout << fnc(nums) << endl;
    return 0;
}