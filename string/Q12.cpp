/*
Q12: 205. Isomorphic Strings
Easy
Topics
Companies
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
Example 1:
Input: s = "egg", t = "add"
Output: true
Example 2:
Input: s = "foo", t = "bar"
Output: false
Example 3:
Input: s = "paper", t = "title"
Output: true
Constraints:
    1 <= s.length <= 5 * 104
    t.length == s.length
    s and t consist of any valid ascii character.
*/

#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }

    for (int tIdx = 0; tIdx < t.size(); tIdx++)
    {

        for (int sIdx = tIdx; sIdx < s.size(); sIdx++)
        {
            // cout << "t[tIdx] : " << t[tIdx] << "  - s[sIdx] : " << s[sIdx] << endl
            //      << endl
            //      << endl;
            
            // if (s[tIdx] == s[sIdx])
            // {
                // s[sIdx] = t[tIdx];
                cout << "s[tIdx] : " << s[tIdx] << "  - s[sIdx] : " << s[sIdx] << endl;
            // }
        }
    }

    cout << "S: " << s << endl;
    cout << "T: " << t << endl;
    return (s == t);
}

int main()
{
    string s = "foo";
    string t = "bar";
    cout << "Output : " << isIsomorphic(s, t);
    return 0;
}