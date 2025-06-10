/* Q5. Number of Digit of a Number. [Log10(N)] */

#include <bits/stdc++.h>
using namespace std;

int digits(int N)
{
    return log10(N) + 1;
}

int main()
{
    int N;
    cin >> N;

    cout << digits(N);

    return 0;
}
