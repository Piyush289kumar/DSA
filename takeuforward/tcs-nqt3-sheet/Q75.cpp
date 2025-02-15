/* Q75: Remove all vowels from the String. */
#include <bits/stdc++.h>
using namespace std;

string remove_all_vowels(string str)
{
    string vowels = "aeiouAEIOU";
    string temp;
    for (auto ch : str)
    {
        if (find(vowels.begin(), vowels.end(), ch) == vowels.end())
        {
            temp += ch;
        }
    }

    str = temp;
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << remove_all_vowels(str) << endl;
    return 0;
}