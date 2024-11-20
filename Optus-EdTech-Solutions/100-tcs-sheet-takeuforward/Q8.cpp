/* Q8: Rotate array by K elements : Block Swap Algorithm

In this article we will learn a very popular algorithm for "Rotate array by K elements : Block Swap Algorithm".

Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.

Example 2:
Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
Output: {4,5,6,7,1,2,3}
Explanation: Rotate the array to right by 3 elements.

*/
#include <bits/stdc++.h>
using namespace std;

void rotateArrayByKth(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    for (int idx = 0; idx < n; idx++)
    {
        temp[idx] = nums[(idx + k) % n];
    }
    nums = temp;
    return;
}
int main()
{
    int n, k;
    cout << "Enter Size : ";
    cin >> n;
    cout << "Enter K'th Rotation : ";
    cin >> k;
    vector<int> nums(n);
    for (int &num : nums)
    {
        cin >> num;
    }
    rotateArrayByKth(nums, k);
    cout << "RESPONSE ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}