/* Q76: Remove Spaces from a String. */
#include <bits/stdc++.h>
using namespace std;

string removeSpace(string str)
{
    string temp;
    for (auto ch : str)
    {
        if (ch != ' ')
        {
            temp += ch;
        }
    }
    str = temp;
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << removeSpace(str) << endl;
    return 0;
}