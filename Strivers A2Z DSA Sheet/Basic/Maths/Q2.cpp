/* Q2. Reverse Interger*/

#include <bits/stdc++.h>
using namespace std;

int reverseInteger(int N)
{
    int org = N;
    long rev = 0;

    while (N)
    {
        rev = rev * 10 + (N % 10);
        if (rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }
        N /= 10;
    }

    return rev;
}

int main()
{
    int N;
    cin >> N;

    cout << reverseInteger(N);

    return 0;
}