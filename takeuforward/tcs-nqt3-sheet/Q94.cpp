/* Q94: Count the number of words in a given string. */
#include <bits/stdc++.h>
using namespace std;

int countNumberOfWords(string str)
{
    int cnt = 0;
    for (auto ch : str)
    {
        if (ch == ' ')
            cnt++;
    }

    return ++cnt;
}

int main()
{
    string str;
    getline(cin, str);
    cout << countNumberOfWords(str) << endl;
    return 0;
}