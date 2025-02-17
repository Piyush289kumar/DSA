/* Q54: Permutations in which N people can occupy R seats.
Formula :  P(N,R)= N! / (N−R)!​
*/

#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;

    int factVal = 1;
    for (int i = 2; i <= num; i++)
    {
        factVal *= i;
    }

    return factVal;
}

int totalSeats(int N, int R)
{
    return (fact(N) / fact(N - R));
}

int main()
{
    int N, R;
    cin >> N >> R;
    cout << totalSeats(N, R) << endl;
    return 0;
}