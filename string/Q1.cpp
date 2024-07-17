// Q1: Roman to Integer.

#include <bits/stdc++.h>
using namespace std;

// int romanToNumber(string paramRomanNumber);

int romanToNumber(string paramRomanNumber)
{
    string s = paramRomanNumber;
    int ans = 0;
    unordered_map<char, int> m;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    for (int i = 0; i < paramRomanNumber.size(); i++)
    {

        if (m[s[i]] < m[s[i + 1]])
        {
            ans -= m[s[i]];
        }
        else
        {
            ans += m[s[i]];
        }
    }

    return ans;
}

int main()
{

    string romanNumber = "MCMXCIV";
    int number = romanToNumber(romanNumber);

    cout << "OutPut : " << number;

    return 0;
}
