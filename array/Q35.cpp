#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &nums)
{

    int slow = 0;
    int fast = nums[nums[fast]];

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }

   

    return slow;
}

int main()
{

    vector<int> nums = {1, 3, 4, 2, 2};

    int res = findDuplicate(nums);

    cout << "RESPONSE ==> " << res;

    return 0;
}