/* Q4: Decimal to Binary.*/

#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int N)
{
    string binary = "";

    while (N)
    {
        binary = to_string(N % 2) + binary;
        N /= 2;
    }
    return binary;
}

int main()
{
    int N;
    cin >> N;

    cout << decimalToBinary(N) << endl;

    return 0;
}