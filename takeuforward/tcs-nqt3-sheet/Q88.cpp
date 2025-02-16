/* Q88: Remove All Duplicates from a String. */
#include <bits/stdc++.h>
using namespace std;

string removeAllDuplicates(string str)
{
    unordered_set<char> seen;
    string uniqueChar;
    for (auto ch : str)
    {
        if (seen.find(ch) == seen.end())
        {
            seen.insert(ch);
            uniqueChar += ch;
        }
    }

    return uniqueChar;
}

int main()
{
    string str;
    getline(cin, str);
    cout << removeAllDuplicates(str) << endl;
    return 0;
}