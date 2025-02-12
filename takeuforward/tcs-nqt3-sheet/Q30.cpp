/* Q30: Check whether a number is Perfect Number or not. */

#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int num)
{
    if (num == 1)
    {
        return true;
    }

    int divisorsSum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            divisorsSum += i;
        }
    }

    return (num == divisorsSum);
}

int main()
{
    int N;
    cin >> N;
    cout << isPerfect(N) << endl;

    return 0;
}