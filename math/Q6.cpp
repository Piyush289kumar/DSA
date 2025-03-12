/* Q6: Sam of N Natural Numbers. */

#include <bits/stdc++.h>
using namespace std;

int sumOfN(int N)
{
    return N * (N + 1) / 2;
}

int main()
{
    int N;
    cin >> N;
    cout << sumOfN(N) << endl;
    return 0;
}