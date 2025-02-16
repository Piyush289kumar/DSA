/* Q96: Change case of each character in a string. */
#include <bits/stdc++.h>
using namespace std;

string changeCase(string str)
{
    for (int idx = 0; idx < str.size(); idx++)
    {
        if (isalpha(str[idx]))
        {
            if (isupper(str[idx]))
            {
                str[idx] = tolower(str[idx]);
            }
            else
            {
                str[idx] = toupper(str[idx]);
            }
        }
    }

    return str;
}
int main()
{
    string str;
    getline(cin, str);
    cout << changeCase(str) << endl;
    return 0;
}