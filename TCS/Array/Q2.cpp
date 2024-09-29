/* Q2: Second Largest
Difficulty: EasyAccuracy: 26.72%Submissions: 719K+Points: 2

Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

Examples:

Input: arr = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr = [10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist so answer is -1.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1).
*/

#include <iostream>
#include <vector>

using namespace std;

int getSecondLargest(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
    {
        return -1;
    }

    int firstLargest = -1;
    int secondLargest = -1;

    int idx = 0;

    while (idx < n)
    {
        if (arr[idx] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[idx];
        }
        else if (arr[idx] > secondLargest && arr[idx] != firstLargest)
        {
            secondLargest = arr[idx];
        }

        idx++;
    }

    return secondLargest;
}

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int res = getSecondLargest(arr);

    cout << "RESPONSE ==> " << res;

    return 0;
}
