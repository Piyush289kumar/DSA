/* Q1. Count Digit. */

#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n)
{
    int copy = n;
    int cnt = 0;

    while (copy)
    {
        int ld = copy % 10;
        copy /= 10;

        if ((ld != 0) && (n % ld == 0))
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    int N;
    cin >> N;

    cout << evenlyDivides(N);

    return 0;
}