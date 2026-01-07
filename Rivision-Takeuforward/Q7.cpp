/* Q7: Sum of all array element. */

#include <bits/stdc++.h>
using namespace std;

int sumOfAllElements(vector<int> &nums)
{
    // built-in function or Sum of all elements

    return accumulate(nums.begin(), nums.end(), 0);
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

    cout << "SUM => " << sumOfAllElements(nums);

    return 0;
}