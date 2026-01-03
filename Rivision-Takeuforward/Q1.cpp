/* Q1: Find a smallest element in an array.*/

#include <bits/stdc++.h>
using namespace std;

int findSmallestElement(vector<int> &nums)
{
    int minE = INT_MAX;
    for (int num : nums)
    {
        minE = min(minE, num);
    }
    return minE;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> nums(N);
        for (int i = 0; i < N; i++)
        {
            cin >> nums[i];
        }
        cout << "Smallest  ==> " << findSmallestElement(nums) << endl;
    }
}