/* Q42: Push Numbers into a Vector Until Enter is Pressed. */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;

    string input;
    while (true)
    {
        getline(cin, input);
        if (input.empty())
            break;
        nums.push_back(stoi(input));
    }

    for (auto &num : nums)
    {
        cout << num << ", ";
    }
    return 0;
}