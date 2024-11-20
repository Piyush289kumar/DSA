/* Q6: Rearrange array in increasing-decreasing order

Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

Examples:

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8

*/
#include <bits/stdc++.h>
using namespace std;

void increasingDecreasingOrder(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int mid = n/2;
    reverse(nums.begin()+mid, nums.end());
    return;
}
int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> nums(n);
    for (int &num : nums)
    {
        cin >> num;
    }
    increasingDecreasingOrder(nums);
    cout << "RESPONSE ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}