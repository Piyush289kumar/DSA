/* Q34: Remove All Duplicates from a String. */

#include <bits/stdc++.h>
using namespace std;

string fnc(string str)
{
    set<char> set;
    string ans;
    for (auto ch : str)
    {
        if (!set.count(ch))
        {
            ans += ch;
            set.insert(ch);
        }
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << "SUM ==> " << fnc(str) << endl;
    return 0;
}