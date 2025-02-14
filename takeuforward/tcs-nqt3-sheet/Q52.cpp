/* Q52: Sum Of Digits of A Number. */
#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(string &N)
{

    int sum = 0;
    for (auto ch : N)
    {
        sum += ch - '0';
    }
    return sum;
}

int main()
{
    string N;
    cin >> N;
    cout << sumOfDigit(N) << endl;
    return 0;
}