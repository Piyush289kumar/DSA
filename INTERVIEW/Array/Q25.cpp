/* Q25: Subarray with 0 sum
Difficulty: MediumAccuracy: 39.79%Submissions: 280K+Points: 4

Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum. You just need to return true/false depending upon whether there is a subarray present with 0-sum or not.

Examples:

Input: arr = {4,2,-3,1,6}
Output: true
Explanation: 2, -3, 1 is the subarray with sum 0.

Input: arr = {4,2,0,1,6}
Output: true
Explanation: 0 is one of the element in the array so there exist a subarray with sum 0.
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool subArrayExists(vector<int> arr)
{

    unordered_set<int> s;
    int sum = 0;

    for (int num : arr)
    {
        sum += num;

        if (num == 0 || sum == 0 || s.find(sum) != s.end())
        {
            return true;
        }

        s.insert(sum);
    }

    return false;
}
int main()
{
    vector<int> arr = {4, 2, -3, 1, 6};

    cout << "RESPONSE ==> " << (subArrayExists(arr) ? "TRUE" : "FALSE");

    return 0;
}