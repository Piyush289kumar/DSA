/* Q84: Check if two Strings are anagrams of each other. */
#include <bits/stdc++.h>
using namespace std;

bool check_anagrams(vector<string> &inputs)
{
    if (inputs.empty())
        return false;

    string temp = inputs[0];
    sort(temp.begin(), temp.end());

    for (int i = 1; i < inputs.size(); i++)
    {
        string ithStr = inputs[i];
        sort(ithStr.begin(), ithStr.end());
        if (ithStr != temp)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> inputs;
    while (true)
    {
        string str;
        cin >> str;
        if (str == "exit")
            break;
        inputs.push_back(str);
    }

    cout << (check_anagrams(inputs) ? "true" : "false");

    return 0;
}