/* Q19: Rotate array by K elements.

Rotate array by K elements

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples:

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateByKthToRight(vector<int> nums, int k)
{
    if (nums.empty())
    {
        return nums;
    }
    int n = nums.size();
    vector<int> temp(n);
    for (int idx = 0; idx < n; idx++)
    {
        temp[(k + idx) % n] = nums[idx];
    }
    nums = temp;
    return nums;
}
vector<int> rotateByKthToLeft(vector<int> nums, int k)
{
    if (nums.empty())
    {
        return nums;
    }
    int n = nums.size();
    vector<int> temp(n);
    for (int idx = 0; idx < n; idx++)
    {
        temp[idx] = nums[(idx + k) % n];
    }
    nums = temp;
    return nums;
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
    vector<int> res = rotateByKthToRight(nums, 2);
    vector<int> res1 = rotateByKthToLeft(nums, 3);
    cout << "rotateByKthToRight RESPONSE ==> ";
    for (int num : res)
    {
        cout << num << "  ";
    }
    cout << endl
         << endl;
    cout << "rotateByKthToLeft RESPONSE ==> ";
    for (int num : res1)
    {
        cout << num << "  ";
    }
    return 0;
}