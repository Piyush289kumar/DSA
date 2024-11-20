/* Q1: Find the smallest element in an array

Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array.

Example2:
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.*/

#include <bits/stdc++.h>

using namespace std;

int findSmallest(vector<int> &nums)
{
    if (nums.empty())
    {
        return -1;
    }

    int smallest = INT_MAX;
    
    for(int num : nums){
        if(smallest > num){
            smallest = num;
        }
    }

    return smallest;
}

int main()
{
    int n;
    cout << "Enter Size Of Vector : ";
    cin >> n;
    vector<int> nums(n);

    for (int &num : nums)
    {
        cin >> num;
    }

    cout << "RESPONSE ==> " << findSmallest(nums);
    return 0;
}