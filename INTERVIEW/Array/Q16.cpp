/* Q16: Array Subset
Difficulty: BasicAccuracy: 44.05%Submissions: 375K+Points: 1

Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m, where both arrays may contain duplicate elements. The task is to determine whether array a2 is a subset of array a1. It's important to note that both arrays can be sorted or unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.

Example 1:

Input:
a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
a2[] = {11, 3, 7, 1, 7}
Output:
Yes
Explanation:
a2[] is a subset of a1[]


Example 2:

Input:
a1[] = {1, 2, 3, 4, 4, 5, 6}
a2[] = {1, 2, 4}
Output:
Yes
Explanation:
a2[] is a subset of a1[]


Example 3:

Input:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}
Output:
No
Explanation:
a2[] is not a subset of a1[]



Your Task:
You don't need to read input or print anything. Your task is to complete the function isSubset() which takes the array a1[], a2[], its size n and m as inputs and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1.



Expected Time Complexity: O(max(n,m))
Expected Auxiliary Space: O(n)
*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_map<int, int> freq;

    for (int idx = 0; idx < n; idx++)
    {
        freq[a1[idx]]++;
    }

    for (int idx = 0; idx < m; idx++)
    {

        if (freq[a2[idx]] <= 0)
        {
            return "No";
        }

        freq[a2[idx]]--;
    }

    return "Yes";
}
int main()
{

    // int a1[] = {10, 5, 2, 23, 19};

    int a1[] = {1, 2, 3, 4, 4, 5, 6};


    int n = sizeof(a1) / sizeof(a1[0]);
    // int a2[] = {19, 5, 3};
    int a2[] = {1, 2, 4};
    int m = sizeof(a2) / sizeof(a2[0]);

    cout << "RESPONSE ==> " << isSubset(a1, a2, n, m);

    return 0;
}