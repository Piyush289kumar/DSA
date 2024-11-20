/* Q12: Adding Element in an Array
Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.
Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4
*/
#include <bits/stdc++.h>
using namespace std;
void insertending(vector<int> &nums, int val)
{
    nums.push_back(val);
    return;
}
void insertbeginning(vector<int> &nums, int val)
{
    reverse(nums.begin(), nums.end());
    nums.push_back(val);
    reverse(nums.begin(), nums.end());
    return;
}
void insertatpos(vector<int> &nums, int pos, int val)
{
    int n = nums.size();
    int idx = 0;
    vector<int> temp;
    while (idx < pos)
    {
        temp.push_back(nums[idx++]);
    }
    temp.push_back(val);    
    while (idx < n)
    {
        temp.push_back(nums[idx++]);
    }
    nums = temp;
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
    insertbeginning(nums, 6);
    insertending(nums, 7);
    insertatpos(nums, 4, 8);
    cout << "RESPONSE ==> ";
    for (int num : nums)
    {
        cout << num << "  ";
    }
    return 0;
}