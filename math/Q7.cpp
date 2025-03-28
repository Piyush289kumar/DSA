/* Q7: Reverse Integer
Solved
Medium
Topics
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Example 1:
Input: x = 123
Output: 321
Example 2:
Input: x = -123
Output: -321
Example 3:
Input: x = 120
Output: 21
Constraints:
    -231 <= x <= 231 - 1
*/

#include <bits/stdc++.h>
using namespace std;

int reverseDigit(int x)
{
    long rev = 0;
    while (x)
    {
        rev = (rev * 10) + (x % 10);
        if (rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }
        x /= 10;
    }
    return (int)rev;
}

int main()
{
    int x;
    cin >> x;
    cout << reverseDigit(x) << endl;
    return 0;
}