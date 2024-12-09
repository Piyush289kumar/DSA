/* Q1: Non-Repeating Element
Difficulty: EasyAccuracy: 39.31%Submissions: 117K+Points: 2

Find the first non-repeating element in a given array arr of integers and if there is not present any non-repeating element then return 0

Note: The array consists of only positive and negative integers and not zero.

Examples:

Input: arr[] = [-1, 2, -1, 3, 2]
Output: 3
Explanation: -1 and 2 are repeating whereas 3 is the only number occuring once. Hence, the output is 3.

Input: arr[] = [1, 1, 1]
Output: 0
Explanation: There is not present any non-repeating element so answer should be 0.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).*/

#include <bits/stdc++.h>

using namespace std;

int firstNonRepeating(vector<int> &arr)
{

    unordered_map<int, int> freq;

    for (int num : arr)
    {
        freq[num]++;
    }

    for (int num : arr)
    {
        if (freq[num] == 1)
        {
            return num;
        }
    }

    return 0;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = firstNonRepeating(arr);
    cout << "RESPONSE ==> " << res;

    return 0;
}