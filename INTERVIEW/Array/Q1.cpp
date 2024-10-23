/* Q1: Min and Max in Array
Difficulty: Basic Accuracy: 68.55% Submissions: 298K+ Points: 1

Given an array arr. Your task is to find the minimum and maximum elements in the array.

Note: Return an array that contains two elements the first one will be a minimum element and the second will be a maximum of an array.

Examples:

Input: arr = [3, 2, 1, 56, 10000, 167]
Output: 1 10000
Explanation: minimum and maximum elements of array are 1 and 10000.

Input: arr = [1, 345, 234, 21, 56789]
Output: 1 56789
Explanation: minimum and maximum element of array are 1 and 56789.

Input: arr = [56789]
Output: 56789 56789
Explanation: Since the array contains only one element so both min & max are same.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

pair<long long, long long> getMinMax(vector<long long int> arr)
{
    int n = arr.size();    

    if (n == 1)
    {        
        return {arr[0], arr[0]};
    }

    long long minElement = arr[0];

    long long maxElement = arr[0];

    for (int idx = 1; idx < n; idx++)
    {
        if (arr[idx] < minElement)
        {
            minElement = arr[idx];
        }
        if (arr[idx] > maxElement)
        {
            maxElement = arr[idx];
        }
    }

    return {minElement, maxElement};
}

int main()
{

    vector<long long int> arr = {3, 2, 1, 56, 10000, 167};
    pair<long long, long long> res = getMinMax(arr);

    cout << "RESPONE ==> " << res.first << " " << res.second << endl;

    return 1;
}