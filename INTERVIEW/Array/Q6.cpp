/* Q6: Number of occurrence
Difficulty: MediumAccuracy: 59.34%Submissions: 244K+Points: 4

Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: x = 2 occurs 4 times in the given array so the output is 4.

Example 2:

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: X = 4 is not present in the given array so the output is 0.

Your Task:
You don't need to read input or print anything.
Your task is to complete the function count() which takes the array of integers arr, n, and x as parameters and returns an integer denoting the answer.
If x is not present in the array (arr) then return 0.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ Arr[i] ≤ 106
1 ≤ X ≤ 106*/

#include <iostream>

using namespace std;

int findFirstOccur(int arr[], int start, int end, int x)
{
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            res = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return res;
}
int findLastOccur(int arr[], int start, int end, int x)
{
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            res = mid;
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}
int count(int arr[], int n, int x)
{
    int totalOccur = 0;
    if (n <= 0)
    {
        return totalOccur;
    }
    int start = 0;
    int end = n - 1;
    int firstOccur = findFirstOccur(arr, start, end, x);
    if (firstOccur == -1)
    {
        return 0;
    }
    int lastOccur = findLastOccur(arr, start, end, x);
    return lastOccur - firstOccur + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    cout << "RESPONSE ==> " << count(arr, n, x);

    return 1;
}