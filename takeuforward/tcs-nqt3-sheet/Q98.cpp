/* Q98: Find the Position of a Substring within a String. */
#include <bits/stdc++.h>
using namespace std;

int findPositionSubstring(string str1, string str2)
{
    int idx = str1.find(str2);
    return ((idx != string::npos) ? idx : -1);
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << findPositionSubstring(str1, str2) << endl;
    return 0;
}