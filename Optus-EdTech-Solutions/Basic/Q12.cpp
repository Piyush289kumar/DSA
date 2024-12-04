#include <bits/stdc++.h>
using namespace std;
bool isValid(string str)
{

    unordered_map<char, char> hash;
    stack<char> st;
    hash = {
        {')', '('},
        {'}', '{'},
        {']', '['},
    };

    for (auto it : str)
    {

        if (hash.find(it) != hash.end())
        {
            if (!st.empty() && st.top() == hash[it])
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            st.push(it);
        }
    }
    return st.empty();
}
int main()
{
    string str;
    cout << endl
         << endl
         << endl;
    cout << "ENTER STR : ";
    cin >> str;

    cout << (isValid(str) ? "True" : "False");
    return 0;
}