/*
Question 8: 67. Add Binary
Easy
Topics
Companies
Given two binary strings a and b, return their sum as a binary string.
Example 1:
Input: a = "11", b = "1"
Output: "100"
Example 2:
Input: a = "1010", b = "1011"
Output: "10101"
Constraints:
    1 <= a.length, b.length <= 104
    a and b consist only of '0' or '1' characters.
    Each string does not contain leading zeros except for the zero itself.
*/

#include <iostream>
#include <string>

using namespace std;

string addBinary(string a, string b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    string ans = "";

    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i--] - '0';
        }
        if (i >= 0)
        {
            sum += b[j--] - '0';
        }
        carry = sum > 1 ? 1 : 0;
        ans += to_string(sum % 2);
    }

    if (carry)
    {
        ans += to_string(carry);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
int main()
{

    string a = "1010";
    string b = "1011";

    cout << "Binary Sum: " << addBinary(a, b);

    return 0;
}
