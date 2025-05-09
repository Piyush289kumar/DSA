/*Q20: 1108. Defanging an IP Address
Solved
Easy
Topics
Companies

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".



Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"



Constraints:

    The given address is a valid IPv4 address.

*/

#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address)
{
    string ans;

    for (auto str : address)
    {
        if (str == '.')
        {
            ans += '[';
            ans += '.';
            ans += ']';
        }
        else
        {
            ans += str;
        }
    }

    return ans;
}

int main()
{
    string input;
    cin >> input;

    cout << defangIPaddr(input) << endl;

    return 0;
}