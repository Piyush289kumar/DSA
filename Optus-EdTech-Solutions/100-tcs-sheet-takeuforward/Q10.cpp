/* Q10: Find Median of the given Array

Problem Statement: Given an unsorted array, find the median of the given array.

Examples:

Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5

*/
#include <bits/stdc++.h>
using namespace std;

double findMedian(vector<int> &nums)
{
  
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
    double res = findMedian(nums);
    cout << "RESPONSE ==> " << res;
    return 0;
}