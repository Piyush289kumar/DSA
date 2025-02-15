/* Q79: Remove brackets from an algebraic expression. */
#include <bits/stdc++.h>
using namespace std;

string removeBrackets(string str)
{
    string brackets = "()[]{}";
    string temp;
    for (auto ch : str)
    {
        if (find(brackets.begin(), brackets.end(), ch) == brackets.end())
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
    cout << removeBrackets(str) << endl;
    return 0;
}