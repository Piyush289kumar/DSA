/* Q87: Maximum occurring character in a string. */
#include <bits/stdc++.h>
using namespace std;

char maxOccChar(string str)
{
    unordered_map<char, int> hash;
    char maxChar;
    int maxOcc = INT_MIN;

    for (auto ch : str)
    {
        hash[ch]++;

        if (hash[ch] > maxOcc)
        {
            maxOcc = hash[ch];
            maxChar = ch;
        }
    }

    return maxChar;
}

int main()
{
    string str;
    getline(cin, str);
    cout << maxOccChar(str) << endl;
    return 0;
}