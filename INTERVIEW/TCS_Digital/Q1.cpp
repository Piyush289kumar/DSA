#include <bits/stdc++.h>
using namespace std;

int frndFum(vector<int> &nums)
{
    int fs = INT_MAX;
    int ss = INT_MAX;

    for (int &num : nums)
    {
        if (fs > num)
        {
            ss = fs;
            fs = num;
        }
        else if (fs != num && ss > num)
        {
            ss = num;
        }
    }

    return ss;
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

    cout << frndFum(nums) << endl;

    return 0;
}