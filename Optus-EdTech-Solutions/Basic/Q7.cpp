/* Q7: Equilibrium Point
Difficulty: EasyAccuracy: 28.13%Submissions: 592K+Points: 2

Given an array arr of non-negative numbers. The task is to find the first equilibrium point in an array. The equilibrium point in an array is an index (or position) such that the sum of all elements before that index is the same as the sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.

Examples:

Input: arr[] = [1, 3, 5, 2, 2]
Output: 3
Explanation: The equilibrium point is at position 3 as the sum of elements before it (1+3) = sum of elements after it (2+2).

Input: arr[] = [1]
Output: 1
Explanation: Since there's only one element hence it's only the equilibrium point.

Input: arr[] = [1, 2, 3]
Output: -1
Explanation: There is no equilibrium point in the given array.
*/

#include <iostream>
#include <vector>

using namespace std;

int equilibriumPoint(vector<int> &arr)
{
    int allSum = 0;
    for (int n : arr)
    {
        allSum += n;
    }

    int currSum = 0;
    int ans = -1;
    for (int idx = 0; idx < arr.size(); idx++)
    {
        currSum += arr[idx];

        if (((currSum * 2) - arr[idx]) == allSum)
        {
            ans = idx+1;
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 5, 2, 2};

    cout << endl
         << endl
         << endl
         << endl;
    cout << "RESPONSE ==> " << equilibriumPoint(arr);
    cout << endl
         << endl
         << endl
         << endl;

    return 0;
}