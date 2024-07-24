/*
Q10: 168. Excel Sheet Column Title
Easy
Topics
Companies
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...
Example 1:
Input: columnNumber = 1
Output: "A"
Example 2:
Input: columnNumber = 28
Output: "AB"
Example 3:
Input: columnNumber = 701
Output: "ZY"
Constraints:
    1 <= columnNumber <= 231 - 1
*/
// string convertToTitle(int columnNumber)
// {
// }

#include <bits/stdc++.h>
using namespace std;
string convertToTitle(int columnNumber)
{
    string response = "";
    int moduleNum = 0;
    while (columnNumber > 0)
    {
        columnNumber -= 1;
        moduleNum = columnNumber % 26;
        columnNumber /= 26;
        response.push_back(moduleNum + 'A');
    }
    reverse(response.begin(), response.end());
    return response;
}
int main()
{
    int n = 701;
    cout << "OUTPUT : " << convertToTitle(n);
}