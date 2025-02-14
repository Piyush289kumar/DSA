/* Q56: Replace all the 0’s with 1 in a given integer. */
#include <bits/stdc++.h>
using namespace std;

string replaceZeroWithOne(string N)
{

    for (auto &ch : N)
    {
        if (ch == '0')
        {
            ch = '1';
        }
    }
    return N;
}

int main()
{
    string N;
    cin >> N;
    cout << replaceZeroWithOne(N) << endl;
    return 0;
}