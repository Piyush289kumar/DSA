/* Q3: Second Smallest and Second Largest element in an array. */

#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndSecondSmallest(vector<int> &nums)
{
    if (nums.size() <= 0)
    {
        return {-1, -1};
    }

    int firstSmall = INT_MAX;
    int secondSmall = INT_MAX;

    for (int num : nums)
    {

        if (firstSmall > num)
        {
            secondSmall = firstSmall;
            firstSmall = num;
        }
        else if (num > firstSmall && secondSmall > num)
        {
            secondSmall = num;
        }
    }

    return {firstSmall, secondSmall};
}

pair<int, int> firstAndSecondLargest(vector<int> &nums)
{
    if (nums.size() <= 0)
    {
        return {-1, -1};
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : nums)
    {
        if (firstLargest < num)
        {
            secondLargest = firstLargest;
            firstLargest = num;
        }
        else if (firstLargest > num && secondLargest < num)
        {
            secondLargest = num;
        }
    }

    return {firstLargest, secondLargest};
}
int main()
{

    int N;
    cin >> N;
    vector<int> nums(N);

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    pair<int, int> resOfSmallest = firstAndSecondSmallest(nums);
    pair<int, int> resOfLargest = firstAndSecondLargest(nums);

    cout << "First Smallest :" << resOfSmallest.first << endl;
    cout << "Second Largest :" << resOfSmallest.second << endl;

    cout << "First Largest :" << resOfLargest.first << endl;
    cout << "Second Largest :" << resOfLargest.second << endl;

    return 0;
}