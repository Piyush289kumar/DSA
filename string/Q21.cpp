/* Q21: Alternating Digit Sum.*/

#include <bits/stdc++.h>
using namespace std;

int alternateDigitSum(int N)
{
    string s = to_string(N);
    int sum = 0, sign = 1;

    for (auto c : s)
    {
        int digit = c - '0';
        sum += sign * digit;
        sign *= -1;
    }

    return sum;
}

int main()
{
    int N;
    cin >> N;

    cout << alternateDigitSum(N) << endl;

    return 0;
}