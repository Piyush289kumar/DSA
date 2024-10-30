/* Q31: Minimize the Heights II
Difficulty: MediumAccuracy: 15.06%Submissions: 618K+Points: 4

Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.

    Increase the height of the tower by K
    Decrease the height of the tower by K

Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.

Examples :

Input: k = 2, arr[] = {1, 5, 8, 10}
Output: 5
Explanation: The array can be modified as {1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}.The difference between the largest and the smallest is 8-3 = 5.

Input: k = 3, arr[] = {3, 9, 12, 16, 20}
Output: 11
Explanation: The array can be modified as {3+k, 9+k, 12-k, 16-k, 20-k} -> {6, 12, 9, 13, 17}.The difference between the largest and the smallest is 17-6 = 11.

Expected Time Complexity: O(n*logn)
Expected Auxiliary Space: O(n)*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMinDiff(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());

    int n = arr.size();

    int smallestElement = arr[0] + k;
    int largestElement = arr[n - 1] - k;

    int ans = arr[n-1] - arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        int minV = min(smallestElement, arr[i + 1] - k);
        int maxV = max(largestElement, arr[i] + k);

        if (minV < 0)
        {
            continue;
        }

        ans = min(ans, (maxV - minV));
    }

    return ans;
}

int main()
{

    vector<int> arr = {1, 8, 10, 6, 4, 6, 9, 1};
    int k = 7;

    cout << "RESPONSE ==> " << getMinDiff(arr, k);
}