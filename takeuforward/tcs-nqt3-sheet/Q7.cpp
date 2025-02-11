/* Q7: Calculate Sum of the Elements of the Array. */

#include <bits/stdc++.h>

using namespace std;

int sumOfArr(vector<int> &nums)
{
    int sum = 0;

    for (int num : nums)
    {
        sum += num;
    }

    return sum;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    int sum = sumOfArr(nums);

    cout << "RES : " << sum << endl;

    return 0;
}