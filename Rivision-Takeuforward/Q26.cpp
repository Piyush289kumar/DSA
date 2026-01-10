/* Q26: Calculate Frequency of characters in a String. */

#include <bits/stdc++.h>
using namespace std;

void sum(string &str)
{
    map<char, int> hash;
    for (auto ch : str)
        hash[ch]++;

    // output
    for (auto e : hash)
        cout << e.first << e.second << " ";
    return;
}

int main()
{
    string str;
    cin >> str;
    sum(str);

    return 0;
}