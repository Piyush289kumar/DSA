/* Q3: Check if array is sorted
Difficulty: EasyAccuracy: 39.37%Submissions: 215K+Points: 2

Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: true
Explanation: The given array is sorted.

Input: arr[] = [90, 80, 100, 70, 40, 30]
Output: false
Explanation: The given array is not sorted.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

bool arraySortedOrNot(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
        return true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }

    return true;
}

int main()
{
    vector<int> arr = {90, 80, 100, 70, 40, 30};

    cout << "RESPONSE ==> ";
    cout << (arraySortedOrNot(arr) ? "true" : "false");
    return 0;
}