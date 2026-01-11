/* Q28: Check if a number is perfect number. */

#include <bits/stdc++.h>
using namespace std;

bool perfetchNum(int N)
{
    if (N <= 1)
        return false;

    int sum = 1;

    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            sum += i;
            if (i != N / i)
            {
                sum += N / i;
            }
        }
    }

    return N == sum;
}

int main()
{
    int N;
    cin >> N;

    cout << (perfetchNum(N) ? "True" : "False");

    return 0;
}