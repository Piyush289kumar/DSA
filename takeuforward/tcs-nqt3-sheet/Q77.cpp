/* Q77: Remove characters from a string except alphabets. */
#include <bits/stdc++.h>
using namespace std;

string removeAllExceptAlphas(string str)
{
    string temp;
    for (auto ch : str)
    {
        if (isalpha(ch))
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
    cout << removeAllExceptAlphas(str) << endl;
    return 0;
}