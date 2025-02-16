/* Q91: Change every letter with next lexicographic alphabet. */
#include <bits/stdc++.h>
using namespace std;

string encode(string plaintext, int shift)
{
    string cipherText;

    for (auto ch : plaintext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            cipherText += (char)(base + (ch - base + shift) % 26);
        }
        else if (isdigit(ch))
        {
            cipherText += (char)('0' + (ch - '0' + shift) % 10);
        }
        else
        {
            cipherText += ch;
        }
    }

    return cipherText;
}

int main()
{
    string plaintext;
    int shift;
    getline(cin, plaintext);
    cin >> shift;
    cout << encode(plaintext, shift) << endl;
    return 0;
}