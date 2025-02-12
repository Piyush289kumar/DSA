/* Q32: Check whether a number is positive or negative. */

#include <bits/stdc++.h>
using namespace std;

string isPosOrNeg(int num)
{
    return (num > 0) ? "Positive": "Negative";
}

int main()
{
    int N;
    cin >> N;
    cout << isPosOrNeg(N) << endl;
    return 0;
}