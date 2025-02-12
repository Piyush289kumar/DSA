/* Q31: Check whether a given number is even or odd. */

#include <bits/stdc++.h>
using namespace std;

bool IsEvenOrOdd(int num)
{
    return !(num & 1);
}

int main()
{
    int N;
    cin >> N;

    cout << IsEvenOrOdd(N) << endl;

    return 0;
}