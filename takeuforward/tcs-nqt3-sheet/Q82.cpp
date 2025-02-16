/* Q82: Calculate Frequency of characters in a String. */
#include <bits/stdc++.h>
using namespace std;

void frequencyOfChars(string str)
{
    map<char, int> hash;
    for (auto ch : str)
    {
        hash[ch]++;
    }

    for (auto pair : hash)
    {
        cout << pair.first << pair.second << " ";
    }
}

int main()
{
    string str;
    getline(cin, str);
    frequencyOfChars(str);
    return 0;
}