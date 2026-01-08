/* Q9: Average of all the elements in the array. */

#include <bits/stdc++.h>
using namespace std;

float avg(vector<int> &nums)
{
    float sum = 0, N = nums.size();
    for(auto num : nums) sum += num;

    return (sum/N);
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

    cout << "ANS ==> " << avg(nums) << endl;

    return 0;
}