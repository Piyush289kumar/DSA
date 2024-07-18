/*
Q4: 14. Longest Common Prefix.
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Constraints:
    1 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lowercase English letters.
*/
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string prefix = "";
    bool test = false;
    sort(strs.begin(), strs.end());
    for (int idx = 0; idx < strs[0].size(); idx++)
    {
        for (int j = 0; j < strs.size(); j++)
        {
            test = (strs[0][idx] == strs[j][idx]);
        }
        if (test)
        {
            prefix += strs[0][idx];
        }
        else
        {
            return prefix;
        }
    }
}
int main()
{
    vector<string> wordArr = {"dog", "racecar", "car"};
    vector<string> wordArr1 = {"flower", "flow", "flight"};
    vector<string> wordArr2 = {"aaa", "aa", "aaa"};
    // cout << "OUTPUT: " << longestCommonPrefix(wordArr) << endl;
    // cout << "OUTPUT: " << longestCommonPrefix(wordArr1) << endl;
    cout << "OUTPUT: " << longestCommonPrefix(wordArr2) << endl;
    return 0;
}
