/* Q30:  Fibonacci Series of a number. */

#include <bits/stdc++.h>
using namespace std;

void fibonacci(int N)
{
    int secLastTerm = 0;
    int lastTerm = 1;

    if (N >= 0)
        cout << 0 << " ";
    if (N >= 1)
        cout << 1 << " ";

    for (int i = 2; i <= N; i++)
    {
        int currSum = lastTerm + secLastTerm;
        secLastTerm = lastTerm;
        lastTerm = currSum;
        cout << lastTerm << " ";
    }
}

int main()
{
    int N;
    cin >> N;

    fibonacci(N);
    return 0;
}