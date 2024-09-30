/* Q9: Find the element that appears once in sorted array
Difficulty: Easy

Given a sorted array arr[] of size N. Find the element that appears only once in the array. All other elements appear exactly twice.

Example 1:

Input:
N = 11
arr[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65}
Output: 4
Explanation: 4 is the only element that
appears exactly once.



Your Task:
You don't need to read input or print anything. Complete the function findOnce() which takes sorted array and its size as its input parameter and returns the element that appears only once.


Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)*/

#include <iostream>
#include <vector>

using namespace std;

int findOnce(int arr[], int n)
{
    if (n <= 1)
        return arr[0];

    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (mid % 2 == 1)
        {
            mid--;
        }

        if (arr[mid] == arr[mid + 1])
        {
            low = mid + 2;
        }
        else
        {
            high = mid;
        }
    }

    return arr[low];
}

int main()
{
    // int arr[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    int arr[] = {-96, -96, -93, -93, -80, -80, -77, -77, -56, -56, -43, -43, -30, -30, -29, -29, -14, -14, -10, -10, 8, 8, 29, 29, 30, 30, 38, 44, 44, 46, 46, 79, 79, 87, 87, 88, 88, 94, 94};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findOnce(arr, n);

    return 0;
}