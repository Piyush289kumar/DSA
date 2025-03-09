/* Q40: Sum of First N Natural numbers. */
#include <bits/stdc++.h>

using namespace std;

int sumOfFirstN(int N)
{
    if (N == 1)
        return 1;
    return N + sumOfFirstN(N - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << sumOfFirstN(N) << endl;

    return 0;
}
