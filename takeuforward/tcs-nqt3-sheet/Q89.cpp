/* Q89: Print all the duplicates in the string. */
#include <bits/stdc++.h>
using namespace std;

void duplicatesChar(string str)
{
    map<char, int> hash;
    for (auto ch : str)
    {
        hash[ch]++;
    }

    for (auto &pair : hash)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " - " << pair.second << endl;
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    duplicatesChar(str);
    return 0;
}