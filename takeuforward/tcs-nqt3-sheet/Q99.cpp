/* Q99: Reverse Words in a String. */
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
    stringstream ss(str);
    string word, ans;

    while (ss >> word)
    {
        ans = word + " " + ans;
    }

    if (!ans.empty() && ans.back() == ' ')
    {
        ans.pop_back();
    }

    return ans;
}

int main()
{
    string str;
    getline(cin, str);
    cout << reverseWords(str) << endl;
    return 0;
}