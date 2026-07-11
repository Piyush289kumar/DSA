#include <bits/stdc++.h>
using namespace std;

string justOneMistake(vector<string> &nums, string match)
{

    unordered_set<char> hash(match.begin(), match.end());

    for (auto &str : nums)
    {
        int k = 0;
        for (auto &ch : str)
        {
            // not found
            if (hash.find(ch) == hash.end())
            {
                k++;
            }

            if (k > 1)
                return "false";
        }
    }

    return "true";
}

int main()
{
    int N;
    cin >> N;

    vector<string> nums;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        nums.push_back(str);
    }

    string match;
    cin >> match;

    cout << justOneMistake(nums, match) << endl;

    return 0;
}
