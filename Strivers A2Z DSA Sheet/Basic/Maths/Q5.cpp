/* Q5. Armstrong Number. */

#include <bits/stdc++.h>

using namespace std;

int digitCnt(int N)
{
    return log10(N) + 1;
}

bool is_armstrong(int N)
{
    int copy = N;
    int arm = 0;
    int p = digitCnt(N);

    while (copy)
    {
        arm += (pow(copy % 10, p));
        copy /= 10;        
    }

    return N == arm;
}

int main()
{
    int N;
    cin >> N;

    cout << is_armstrong(N);

    return 0;
}