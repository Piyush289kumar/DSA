/* Q7. Minimum Jumps. */

#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &nums)
{
    if (!nums[0])
        return -1;

    int ans = 1, jump = nums[0], mx = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        jump--;
        mx--;
        mx = max(mx, nums[i]);

        if (!jump && i != nums.size() - 1)
        {
            if (!mx)
                return -1;
            jump = mx;
            mx = 0;
            ans++;
        }
    }
    return ans;
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

    cout << minJumps(nums) << endl;

    return 0;
}