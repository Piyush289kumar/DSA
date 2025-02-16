/* Q83: Find Non-repeating characters of a String. */
#include <bits/stdc++.h>
using namespace std;

void nonRepeatingChars(string str)
{

    unordered_map<char, int> hash;
    for (auto ch : str)
    {
        hash[ch]++;
    }

    bool flag = true;
    for (auto ch : str)
    {
        if (hash[ch] == 1)
        {
            if (!flag)
            {
                cout << ", ";
            }
            cout << ch;
            flag = false;
        }
    }
    cout << endl;
}

int main()
{
    string str;
    getline(cin, str);
    nonRepeatingChars(str);
    return 0;
}