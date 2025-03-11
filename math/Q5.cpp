/* Q5: Decimal to Binary. */

#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string N)
{
    int decimal = 0, len = N.size();

    for (int i = 0; i < len; i++)
    {
        decimal += (N[len - 1 - i] - '0') * pow(2, i);
    }
    return decimal;
}

int main()
{
    string N;
    cin >> N;

    cout << binaryToDecimal(N) << endl;

    return 0;
}