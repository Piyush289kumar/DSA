/* Q28: Longest consecutive subsequence
Difficulty: MediumAccuracy: 33.0%Submissions: 308K+Points: 4

Given an array of non-negative integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

Examples:

Input: arr[] = [2, 6, 1, 9, 4, 5, 3]
Output: 6
Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.

Input: arr[] = [1, 9, 3, 10, 4, 20, 2]
Output: 4
Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findLongestConseqSubseq(vector<int> &arr)
{

    int n = arr.size();

    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int maxLen = 0;
    unordered_map<int, int> umap;

    for (int num : arr)
    {
        umap[num]++;
    }

    for (int i = 0; i < n; i++)
    {

        if (umap.find(arr[i] - 1) == umap.end())
        {
            int len = 1;
            int num = arr[i] + 1;

            while (umap.find(num) != umap.end())
            {
                len++;
                num++;
            }

            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {2, 6, 1, 9, 4, 5, 3};
    cout << findLongestConseqSubseq(arr) << endl;
    return 0;
}