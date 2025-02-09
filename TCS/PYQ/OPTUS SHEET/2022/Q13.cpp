#include <bits/stdc++.h>

using namespace std;

string termFind(int num)
{

    vector<int> nums(2, 0);
    int evenTerm = 7;
    int oddTerm = 6;

    for (int i = 2; i < num; i++)
    {
        if (i % 2 == 0)
        {
            nums.push_back(evenTerm);
            evenTerm += 7;
        }
        else
        {
            nums.push_back(oddTerm);
            oddTerm += 6;
        }
    }

    return to_string(num) + " term of series is " + to_string(nums.back());
}

int main()
{

    int x;
    cin >> x;
    cout << termFind(x) << endl;

    return 0;
}