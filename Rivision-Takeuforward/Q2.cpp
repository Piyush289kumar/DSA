/* Q2: Find Largerst Element in an array. */

#include <bits/stdc++.h>
using namespace std;

int largestNubmer(vector<int> &nums)
{
    int maxE = INT_MIN;
    for (int num : nums)
    {
        maxE = max(num, maxE);
    }

    return maxE;
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

    cout << "ANS => " << largestNubmer(nums) << endl;
    return 0;
}