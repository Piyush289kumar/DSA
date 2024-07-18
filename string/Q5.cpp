/*
Q5: 20. Valid Parentheses
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
Example 1:
Input: s = "()"
Output: true
Example 2:
Input: s = "()[]{}"
Output: true
Example 3:
Input: s = "(]"
Output: false
Constraints:
    1 <= s.length <= 104
    s consists of parentheses only '()[]{}'.
*/
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    int parentheseCurved = 0;
    int parentheseSquare = 0;
    int parentheseCurly = 0;
    for (int idx = 0; idx < s.size(); idx++)
    {
        if (s[idx] == '(' && s[idx + 1] == ')')
        {
            parentheseCurved++;
        }
        else if (s[idx - 1] == '(' && s[idx] == ')')
        {
            parentheseCurved--;
        }
        else if (s[idx] == '[' && s[idx + 1] == ']')
        {
            parentheseSquare++;
        }
        else if (s[idx - 1] == '[' && s[idx] == ']')
        {
            parentheseSquare--;
        }
        else if (s[idx] == '{' && s[idx + 1] == '}')
        {
            parentheseCurly++;
        }
        else if (s[idx - 1] == '{' && s[idx] == '}')
        {
            parentheseCurly--;
        }
        else
        {
            switch (s[idx])
            {
            case '(':
                parentheseCurved++;
                break;
            case ')':
                parentheseCurved -= 2;
                break;
            case '[':
                parentheseSquare++;
                break;
            case ']':
                parentheseSquare -= 2;
                break;
            case '{':
                parentheseCurly++;
                break;
            case '}':
                parentheseCurly -= 2;
                break;
            }
        }
    }
    return parentheseCurved == 0 && parentheseSquare == 0 && parentheseCurly == 0;
}
int main()
{
    // string str1 = "()[]{}";
    // string str2 = "()";
    string str3 = "([)]";
    cout << "OUTPUT: " << (isValid(str3) ? "True" : "False");
}