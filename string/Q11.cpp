/*
Q11: 171. Excel Sheet Column Number
Easy
Topics
Companies
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.
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
Input: columnTitle = "A"
Output: 1
Example 2:
Input: columnTitle = "AB"
Output: 28
Example 3:
Input: columnTitle = "ZY"
Output: 701
Constraints:
    1 <= columnTitle.length <= 7
    columnTitle consists only of uppercase English letters.
    columnTitle is in the range ["A", "FXSHRXW"]. */
#include <bits/stdc++.h>
using namespace std;
int NumberToTitle(string columnTitle)
{
    int N = columnTitle.size();
    int response = 0;
    if (N < 1 || N > 7)
    {
        return response;
    }
    for (int idx = 0; idx < N; idx++)
    {
        int rem = 0;
        rem = (columnTitle[idx] - 'A') + 1;
        response = (response * 26) + rem;
    }
    return response;
}
int main()
{
    string s = "ZY";
    cout << "OUTPUT: " << NumberToTitle(s);
    return 0;
}
