/* Q9: Average of all the elements in the array. */

#include <bits/stdc++.h>

using namespace std;

double averageArr(vector<int> &nums)
{
    double sum = 0;

    for (auto num : nums)
    {
        sum += num;
    }

    double average = sum/nums.size();

    return average;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    double res = averageArr(nums);

    cout << res << endl;

    return 0;
}