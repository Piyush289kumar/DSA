/* Q7: Move all zeroes to end of array
Difficulty: EasyAccuracy: 45.51%Submissions: 193K+Points: 2

Given an array arr[]. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in place.

Examples:

Input: arr[] = [3, 5, 0, 0, 4]
Output: [3, 5, 4, 0, 0]
Explanation: The non-zero elements preserve their order while the 0 elements are moved to the right.

Input: arr[] = [0, 0, 0, 4]
Output: [4, 0, 0, 0]
Explanation: 4 is the only non-zero element and it gets moved to the left.

Input: arr[] = [10, 2, 4]
Output: [10, 2, 4]
Explanation: Since there are no 0s, the array does not change.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void pushZerosToEnd(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
    {
        return;
    }

    int nonZeroIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[nonZeroIdx++], arr[i]);
        }
    }

    return;
}

int main()
{
    vector<int> arr = {3, 5, 0, 0, 4};
    pushZerosToEnd(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}