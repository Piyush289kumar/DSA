/* Q7: Remove Spaces
Difficulty: BasicAccuracy: 49.21%Submissions: 70K+Points: 1

Given a string, remove spaces from it.

Example 1:

Input:
S = "geeks  for geeks"
Output: geeksforgeeks
Explanation: All the spaces have been
removed.

Example 2:

Input:
S = "    g f g"
Output: gfg
Explanation: All the spaces including
the leading ones have been removed.


Your Task:
You don't need to read input or print anything. Your task is to complete the function modify() which takes the string S as input and returns the resultant string by removing all the white spaces from S.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).*/

#include <iostream>
#include <string>

using namespace std;

string modify(string s)
{
    string res = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            res += s[i];
        }
    }

    return res;
}

int main()
{
    string s = "geeks  for geeks";

    string res = modify(s);

    cout << "RESPONSE ==> " << res;

    return 0;
}