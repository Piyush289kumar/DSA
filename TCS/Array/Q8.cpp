/* Q8: Missing in Array

Formula ==> n * (n+1) / 2

Difficulty: Easy

Given an array arr of size n−1 that contains distinct integers in the range of 1 to n (inclusive), find the missing element. The array is a permutation of size n with one element missing. Return the missing element.

Examples:

Input: n = 5, arr[] = [1,2,3,5]
Output: 4
Explanation : All the numbers from 1 to 5 are present except 4.

Input: n = 2, arr[] = [1]
Output: 2
Explanation : All the numbers from 1 to 2 are present except 2.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(int n, vector<int> &arr)
{

    // Formula ==> n * (n+1) / 2

    int orgTotalSum = ((n * (n + 1)) / 2);

    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    return orgTotalSum - sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5};
    int n = 5;

    int res = missingNumber(n, arr);

    cout << "RESPONSE ==> " << res;

    return 0;
}