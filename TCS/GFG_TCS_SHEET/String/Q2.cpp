/* Q2: Convert characters of a string to opposite case

Given a string, convert the characters of the string into the opposite case,i.e. if a character is the lower case then convert it into upper case and vice-versa.

Examples:

Input : geeksForgEeks
Output : GEEKSfORGeEKS
Input : hello every one
Output : HELLO EVERY ONE

ASCII values  of alphabets: A – Z = 65 to 90, a – z = 97 to 122 */

#include <bits/stdc++.h>

using namespace std;

string caseConversion(string str)
{

    string ans = "";
    for (char ch : str)
    {
        int code = ch - 0;
        if (code >= 65 && code <= 90)
        {
            ans += (char)tolower(ch);
        }
        else
        {
            ans += (char)toupper(ch);
        }
    }

    return ans;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << caseConversion(str);

    return 0;
}