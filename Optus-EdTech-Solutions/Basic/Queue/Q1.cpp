// Q1. Queue Implement.
#include <bits/stdc++.h>

using namespace std;

void queueOnArr(vector<int> &nums)
{

    queue<int> que;

    for (int num : nums)
    {
        que.push(num);
    }

    // Print
    cout << "Queue ==> ";

    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    queueOnArr(nums);

    return 0;
}