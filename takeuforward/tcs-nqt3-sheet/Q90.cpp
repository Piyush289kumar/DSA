/* Q90: Remove Characters from first String present in the Second String. */
#include <bits/stdc++.h>
using namespace std;

string removeChars(string &str1, string &str2)
{
    string temp;
    for (auto ch : str1)
    {
        if (find(str2.begin(), str2.end(), ch) == str2.end())
        {
            temp += ch;
        }
    }

    str1 = temp;
    return str1;
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    cout << removeChars(str1, str2) << endl;
    return 0;
}