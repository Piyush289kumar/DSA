#include <bits/stdc++.h>
using namespace std;

pair<int, int> findRooms(vector<int> &nums, int K)
{

    int left = 0, right = 0, sum = 0;
    while (right < nums.size())
    {
        sum += nums[right];

        while (sum > K)
        {
            sum -= nums[left++];
        }

        if (sum == K)
        {
            return {left, right};
        }
        
        right++;
    }
    return {-1, -1};
}

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    pair<int, int> rooms = findRooms(nums, K);
    cout << rooms.first << " " << rooms.second << endl;
    return 0;
}