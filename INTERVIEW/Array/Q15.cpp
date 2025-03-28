/* Q15: Indexes of Subarray Sum
Difficulty: MediumAccuracy: 16.5%Submissions: 1.7MPoints: 4

Given an unsorted array arr containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray.

Examples:

Input: arr[] = [1,2,3,7,5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.

Input: arr[] = [1,2,3,4,5,6,7,8,9,10], target = 15,
Output: [1, 5]
Explanation: The sum of elements from 1st to 5th position is 15.

Input: arr[] = [7,2,1], target = 2
Output: [2, 2]
Explanation: The sum of elements from 2nd to 2nd position is 2.

Input: arr[] = [5,3,4], target = 2
Output: -1
Explanation: There is no subarray with sum 2.
*/

#include <iostream>
#include <vector>

using namespace std;
vector<int> subarraySum(vector<int> &arr, int target)
{

    int n = arr.size();

    int right = 0;
    int left = 0;

    int currSum = 0;

    vector<int> ans;

    while (right < n)
    {
        currSum += arr[right++];

        while (currSum > target && left < right)
        {
            currSum -= arr[left++];
        }

        if (currSum == target)
        {
            ans.push_back(left + 1);
            ans.push_back(right);
            return ans;
        }
    }

    return {-1};
}

int main()
{
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;
    vector<int> result = subarraySum(arr, target);
    if (result.size() == 2)
    {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}