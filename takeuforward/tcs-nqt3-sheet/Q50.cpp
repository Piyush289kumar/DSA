/* Q50: Check if the given number is Harshad(Or Niven) Number. */
#include <bits/stdc++.h>
using namespace std;

bool is_harshad(int N)
{
    int copy = N;
    int sum = 0;
    while (copy)
    {
        sum += copy % 10;
        copy /= 10;
    }

    return (N % sum == 0);
}

int main()
{
    int N;
    cin >> N;
    cout << (is_harshad(N) ? "Yes it is a Harshad number." : "No it is not a Harshad number.");
    return 0;
}