/* Q6: Longest Common Prefix of Strings
Difficulty: EasyAccuracy: 29.52%Submissions: 290K+Points: 2

Given an array of strings arr. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "-1".

Examples :

Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
Output: gee
Explanation: "gee" is the longest common prefix in all the given strings.

Input: arr[] = ["hello", "world"]
Output: -1
Explanation: There's no common prefix in the given strings.

Expected Time Complexity: O(n*min(|arri|))
Expected Space Complexity: O(min(|arri|))

Constraints:
1 ≤ |arr| ≤ 103
1 ≤ |arr[i]| ≤ 10^3
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> arr)
{
    string prefix = "";
    if (arr.size() == 0)
    {
        return prefix;
    }

    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[arr.size() - 1];

    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] == last[i])
        {
            prefix += first[i];
        }
        else
        {
            break;
        }
    }

    return (prefix.empty() ? "-1" : prefix);
}

int main()
{
    // vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geezer"};
    vector<string> arr = {"ivvpk", "eyytehg", "cfninum", "ivsirnl", "vfmxublnb"};

    string res = longestCommonPrefix(arr);

    cout << "RESPONSE ==> " << res;

    return 0;
}