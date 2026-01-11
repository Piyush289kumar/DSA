/* Q33: Remove brackets from an algebraic expression. */

#include <bits/stdc++.h>
using namespace std;

string clean(string str)
{
    string cleanStr;
    for (auto c : str)
    {
        if (c == '(' || c == ')') continue;

        cleanStr += c;
    }
    return cleanStr;
}

int main()
{
    string str;
    cin >> str;

    cout << clean(str) << endl;

    return 0;
}