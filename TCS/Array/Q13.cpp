/* Q13: 169. Majority Element
Difficulty: Medium

====================================

Boyer-Moore Voting Algorithm

====================================

Given an array arr. Find the majority element in the array. If no majority exists, return -1.

    A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [3, 1, 3, 3, 2]
Output: 3
Explanation: Since, 3 is present more than n/2 times, so it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than n/2 times, so it is the majority element.

Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than n/2 times, so there is no majority element.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int fq = 0, ans = 0;

    for (int num : nums)
    {
        if (fq == 0)
        {
            ans = num;
        }

        if (ans == num)
        {
            fq++;
        }
        else
        {
            fq--;
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {3, 1, 3, 3, 2};
    int res = majorityElement(nums);

    cout << "RESPONSE ==> " << res;

    return 0;
}