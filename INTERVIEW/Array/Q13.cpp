/* Q13: Peak element
Difficulty: BasicAccuracy: 38.86%Submissions: 483K+Points: 1

Given an 0-indexed array of integers arr[] of size n, find its peak element and return it's index. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).

Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.

Examples :

Input: n = 3, arr[] = {1, 2, 3}
Output: 1
Explanation: If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property, so answer will be printed as 0.

Input: n = 7, arr[] = {1, 1, 1, 2, 1, 1, 1}
Output: 1
Explanation: In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.

Your Task:
You don't have to read input or print anything. Complete the function peakElement() which takes the array arr[] and its size n as input parameters and returns the index of the peak element.
*/

#include <iostream>

using namespace std;

int findPeak(int arr[], int start, int end)
{
    if (start == end)
    {
        return start;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] < arr[mid + 1])
    {
        return findPeak(arr, mid + 1, end);
    }
    else
    {
        return findPeak(arr, start, mid);
    }
}

int peakElement(int arr[], int n)
{

    if (n <= 1)
    {
        return 1;
    }

    int start = 0;
    int end = n - 1;
    return findPeak(arr, start, end);
}

int main()
{
    int arr[] = {1, 2, 1, 2, 3, 5, 6, 3, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "RESPONSE ==> " << peakElement(arr, n);

    return 1;
}