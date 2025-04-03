/* Q92: Find the largest word in a String. */

#include <bits/stdc++.h>
using namespace std;

string longestWord(string &str)
{  
    string longStr, word;

    stringstream ss(str);

    while (ss >> word)
    {
        if (longStr.size() < word.size())
        {            
            longStr = word;
        }
    }

    return longStr;
}

int main()
{
    string str;
    getline(cin, str);

    cout << longestWord(str) << endl;

    return 0;
}