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
    stack<char> stack;
    map<char, char> map;
    map = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };
    for (char ite : s)
    {
        if (map.find(ite) != map.end())
        {
            if (!stack.empty() && stack.top() == map[ite])
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            stack.push(ite);
        }
    }
    return stack.empty();
}
int main()
{
    string question = "]";
    cout << "OUTPUT : " << (isValid(question) ? "TRUE" : "FALSE") << endl;
}