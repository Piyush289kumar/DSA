/* Q22: Find all Palindrome Numbers in a given range. */

#include <bits/stdc++.h>
using namespace std;

bool isPal(int N)
{
    int org = N, rev = 0;
    while (N)
    {
        rev = (rev * 10) + (N % 10);
        N /= 10;
    }
    return org == rev;
}

void palRange(int min, int max)
{
    for (int i = min; i <= max; i++)
    {
        if (isPal(i))
            cout << i << " ";
    }
}

int main()
{
    int min, max;
    cin >> min >> max;

    palRange(min, max);

    return 0;
}