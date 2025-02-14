/* Q47: Check if a number is Automorphic Number. */
#include <bits/stdc++.h>
using namespace std;

bool is_automorphic_number(int &N)
{
    int sqt = N * N;

    while (sqt && N)
    {
        if ((N % 10) != (sqt % 10))
        {
            return false;
        }

        N /= 10;
        sqt /= 10;
    }

    return true;
}

int main()
{
    int N;
    cin >> N;

    cout << (is_automorphic_number(N) ? "Automorphic Number\n" : "Not Automorphic Number\n");
}