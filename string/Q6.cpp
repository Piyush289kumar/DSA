/*
Q6: 28. Find the Index of the First Occurrence in a String.

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

Example 2:
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

Constraints:
    1 <= haystack.length, needle.length <= 104
    haystack and needle consist of only lowercase English characters.
*/
#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    int needleSize = needle.size();
    int haystackSize = haystack.size();
    if (needle.empty() || haystackSize < needleSize)
    {
        return -1;
    }
    for (int idx = 0; idx <= haystackSize - needleSize; idx++)
    {
        if (haystack.substr(idx, needleSize) == needle)
        {
            return idx;
        }
    }
    return -1;
}
int main()
{
    string haystack = "a";
    string needle = "a";
    cout << strStr(haystack, needle);
}