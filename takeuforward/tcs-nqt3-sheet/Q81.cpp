/* Q81: Capitalize first and last character of each word of a string. */
#include <bits/stdc++.h>
using namespace std;

string capitalizeFL(string str)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0 || i == str.size() - 1)
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ')
        {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
    }

    return str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << capitalizeFL(str) << endl;
    return 0;
}