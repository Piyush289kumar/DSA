// Q1: Split Text to Word.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "MCMXCIV";
    string s = "CM";
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'I':
            sum = 1;
            cout << i << "- s[ " << s[i] << "]" << endl;
            break;
        case 'V':
            if (s[i - 1] == 'I')
            {
                sum = 4; // Because we have already added 1 for 'I', we add only 3 more to make 4
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            else if (s[i  1] == 'I')
            {
                sum = 5;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            break;
        case 'X':
            if (s[i - 1] == 'I')
            {
                sum = 9; // Because we have already added 1 for 'I', we add only 8 more to make 9
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            else
            {
                sum = 10;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            break;
        case 'L':
            if (s[i - 1] == 'X')
            {
                sum = 40; // Because we have already added 10 for 'X', we add only 30 more to make 40
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            else
            {
                sum = 50;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            break;
        case 'C':

            if (s[i] == 'C' && s[i - 1] == 'X' && s[i + 1] == 'M')
            {
                sum += 90;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            else if (s[i] == 'C' && s[i - 1] != 'X' && s[i + 1] != 'M')
            {
                sum = 100;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }

            break;
        case 'D':
            if (s[i - 1] == 'C')
            {
                sum = 400; // Because we have already added 100 for 'C', we add only 300 more to make 400
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            else
            {
                sum = 500;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            break;
        case 'M':
            if (s[i] == 'M' && s[i - 1] == 'C')
            {
                sum += 900;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            else if (s[i] == 'M' && s[i - 1] != 'C')
            {
                sum = 1000;
                cout << i << "- s[ " << s[i] << "]" << endl;
            }
            break;
        default:
            // Invalid character in Roman numeral string
            sum = -1;
            cout << i << "- s[ " << s[i] << "]" << endl;

            return sum;
        }
    }

    cout << "Output : " << sum << endl;
    return 0;
}