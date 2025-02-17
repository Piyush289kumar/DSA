/* Q99: Reverse Words in a String. */
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
    string ans;

    string temp;
    for (auto ch : str)
    {
        temp += ch;
        if (ch == ' ')
        {
            ans = temp + ans;
            temp = "";
        }
    }
    ans = temp + " " + ans;

    return ans;
}

int main()
{
    string str;
    getline(cin, str);
    cout << reverseWords(str) << endl;
    return 0;
}