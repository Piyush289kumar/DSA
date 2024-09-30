/* Q12: Sort 0s, 1s and 2s
Difficulty: Easy

==================================================================================================

Dutch National Flag problem approach

1. If arr[mid] == 0, swap arr[mid] with arr[low] and increment both mid and low.

2. If arr[mid] == 1, just increment mid (no action needed).

3. If arr[mid] == 2, swap arr[mid] with arr[high] and decrement high without changing mid.

==================================================================================================


Given an array arr containing only 0s, 1s, and 2s. Sort the array in ascending order.

Examples:

Input: arr[]= [0, 2, 1, 2, 0]
Output: 0 0 1 2 2
Explanation: 0s 1s and 2s are segregated into ascending order.

Input: arr[] = [0, 1, 0]
Output: 0 0 1
Explanation: 0s 1s and 2s are segregated into ascending order.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort012(vector<int> &arr)
{
    int n = arr.size();

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 0)
        {
            swap(arr[mid++], arr[low++]);
        }
        else
        {
            swap(arr[mid], arr[high--]);
        }
    }
}

int main()
{
    vector<int> arr = {0, 2, 1, 2, 0};
    sort012(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}