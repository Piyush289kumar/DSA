/* Q9: Average of all the elements in the array

Problem Statement: Given an array, we have to find the average of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 1.8
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8
*/
#include <bits/stdc++.h>
using namespace std;

double averageOfAllElemets(vector<int> &nums)
{
    double sum = 0;
    for (int num : nums)
    {
        sum += num;
    }
    double avg = sum / nums.size();
    return avg;
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
    double res = averageOfAllElemets(nums);
    cout << "RESPONSE ==> " << res;
    return 0;
}