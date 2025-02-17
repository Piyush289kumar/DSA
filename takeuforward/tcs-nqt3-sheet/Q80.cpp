/* Q80: Sum of the Numbers in a String. */

#include <bits/stdc++.h>
using namespace std;

int sumOfNumbersInStr(string str)
{
    int sum = 0;
    int num = 0;

    for (auto ch : str)
    {
        if (isdigit(ch))
        {
            num = num * 10 + (ch - '0');
        }
        else
        {
            sum += num;
            num = 0;
        }
    }

    sum += num;

    return sum;
}

int main()
{
    string str;
    getline(cin, str);
    cout << sumOfNumbersInStr(str) << endl;
    return 0;
}